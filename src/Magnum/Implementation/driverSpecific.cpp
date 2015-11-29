/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013, 2014, 2015
              Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#include "Magnum/Context.h"

#include <algorithm>

#include "Magnum/Extensions.h"
#include "Magnum/Math/Range.h"

namespace Magnum {

namespace {
    std::vector<std::string> KnownWorkarounds{
        #ifndef MAGNUM_TARGET_GLES
        /* Creating core context with specific version on AMD and NV
           proprietary drivers causes the context to be forced to given
           version instead of selecting latest available version */
        "amd-nv-no-forward-compatible-core-context",

        /* Using ARB_explicit_uniform_location on AMD linux drivers 13.251
           caused the GLSL compiler to crash */
        "amd-explicit-uniform-location-crash",

        #ifdef CORRADE_TARGET_WINDOWS
        /* On Windows Intel drivers ARB_shading_language_420pack is exposed in
           GLSL even though the extension (e.g. binding keyword) is not
           supported */
        "intel-windows-glsl-exposes-unsupported-shading-language-420pack",
        #endif

        /* Layout qualifier causes compiler error with GLSL 1.20 on Mesa, GLSL
           1.30 on NVidia and 1.40 on Mac OS X. Everything is fine when using
           newer GLSL version. */
        "no-layout-qualifiers-on-old-glsl",
        #endif

        #ifdef CORRADE_TARGET_NACL
        /* NaCl advertises some additional extensions but the GLESv2 library
           does not have any entrypoints for them and there is no GetProcAddress
           equivalent, thus marking them as unsupported. */
        "nacl-missing-extension-entrypoints"
        #endif
    };
}

namespace Implementation {

/* Used in Shader.cpp (duh) */
bool isShaderCompilationLogEmpty(const std::string&);
bool isShaderCompilationLogEmpty(const std::string& result) {
    #if defined(CORRADE_TARGET_WINDOWS) && !defined(MAGNUM_TARGET_GLES)
    /* Intel Windows drivers are too chatty */
    if((Context::current()->detectedDriver() & Context::DetectedDriver::IntelWindows) && result == "No errors.\n")
        return true;
    #else
    static_cast<void>(result);
    #endif

    return false;
}

/* Used in AbstractShaderProgram.cpp (duh) */
bool isProgramLinkLogEmpty(const std::string&);
bool isProgramLinkLogEmpty(const std::string& result) {
    #if defined(CORRADE_TARGET_WINDOWS) && !defined(MAGNUM_TARGET_GLES)
    /* Intel Windows drivers are too chatty */
    if((Context::current()->detectedDriver() & Context::DetectedDriver::IntelWindows) && result == "No errors.\n")
        return true;
    #else
    static_cast<void>(result);
    #endif

    return false;
}

}

auto Context::detectedDriver() -> DetectedDrivers {
    if(_detectedDrivers) return *_detectedDrivers;

    _detectedDrivers = DetectedDrivers{};

    const std::string vendor = vendorString();

    #ifndef MAGNUM_TARGET_GLES
    /* AMD binary desktop drivers */
    if(vendor.find("ATI Technologies Inc.") != std::string::npos)
        return *_detectedDrivers |= DetectedDriver::AMD;

    #ifdef CORRADE_TARGET_WINDOWS
    /* Intel Windows drivers */
    if(vendor.find("Intel") != std::string::npos)
        return *_detectedDrivers |= DetectedDriver::IntelWindows;
    #endif
    #endif

    /** @todo there is also D3D9/D3D11 distinction on webglreport.com, is it useful? */
    #ifdef MAGNUM_TARGET_GLES
    /* OpenGL ES implementation using ANGLE. Taken from these sources:
       http://stackoverflow.com/a/20149090
       http://webglreport.com
    */
    {
        Range1Di range;
        glGetIntegerv(GL_ALIASED_LINE_WIDTH_RANGE, range.data());
        if(range.min() == 1 && range.max() == 1 && vendor != "Internet Explorer")
            return *_detectedDrivers |= DetectedDriver::ProbablyAngle;
    }
    #endif

    return *_detectedDrivers;
}

void Context::disableDriverWorkaround(const std::string& workaround) {
    /* Ignore unknown workarounds */
    if(std::find(KnownWorkarounds.begin(), KnownWorkarounds.end(), workaround) == KnownWorkarounds.end()) return;
    _driverWorkarounds.emplace_back(workaround, true);
}

bool Context::isDriverWorkaroundDisabled(const std::string& workaround) {
    CORRADE_INTERNAL_ASSERT(std::find(KnownWorkarounds.begin(), KnownWorkarounds.end(), workaround) != KnownWorkarounds.end());

    /* If the workaround was already asked for or disabled, return its state,
       otherwise add it to the list as used one */
    for(const auto& i: _driverWorkarounds)
        if(i.first == workaround) return i.second;
    _driverWorkarounds.emplace_back(workaround, false);
    return false;
}

void Context::setupDriverWorkarounds() {
    #define _setRequiredVersion(extension, version)                           \
        if(_extensionRequiredVersion[Extensions::extension::Index] < Version::version) \
            _extensionRequiredVersion[Extensions::extension::Index] = Version::version

    #ifndef MAGNUM_TARGET_GLES
    if((detectedDriver() & DetectedDriver::AMD) && !isDriverWorkaroundDisabled("amd-explicit-uniform-location-crash"))
        _setRequiredVersion(GL::ARB::explicit_uniform_location, None);

    #ifdef CORRADE_TARGET_WINDOWS
    if((detectedDriver() & DetectedDriver::IntelWindows) && !isExtensionSupported<Extensions::GL::ARB::shading_language_420pack>() && !isDriverWorkaroundDisabled("intel-windows-glsl-exposes-unsupported-shading-language-420pack"))
        _setRequiredVersion(GL::ARB::shading_language_420pack, None);
    #endif

    if(!isDriverWorkaroundDisabled("no-layout-qualifiers-on-old-glsl")) {
        _setRequiredVersion(GL::ARB::explicit_attrib_location, GL320);
        _setRequiredVersion(GL::ARB::explicit_uniform_location, GL320);
        _setRequiredVersion(GL::ARB::shading_language_420pack, GL320);
    }
    #endif

    #ifdef CORRADE_TARGET_NACL
    if(!isDriverWorkaroundDisabled("nacl-missing-extension-entrypoints")) {
        _setRequiredVersion(GL::EXT::multi_draw_arrays, None);
        _setRequiredVersion(GL::EXT::debug_label, None);
        _setRequiredVersion(GL::EXT::debug_marker, None);
        _setRequiredVersion(GL::EXT::disjoint_timer_query, None);
        _setRequiredVersion(GL::EXT::separate_shader_objects, None);
        _setRequiredVersion(GL::EXT::multisampled_render_to_texture, None);
        _setRequiredVersion(GL::EXT::robustness, None);
        _setRequiredVersion(GL::KHR::debug, None);
        _setRequiredVersion(GL::NV::read_buffer_front, None);
        _setRequiredVersion(GL::OES::mapbuffer, None);
        _setRequiredVersion(GL::ANGLE::framebuffer_blit, None);
        _setRequiredVersion(GL::ANGLE::framebuffer_multisample, None);
        _setRequiredVersion(GL::ANGLE::instanced_arrays, None);
        _setRequiredVersion(GL::APPLE::framebuffer_multisample, None);
        _setRequiredVersion(GL::EXT::discard_framebuffer, None);
        _setRequiredVersion(GL::EXT::blend_minmax, None);
        _setRequiredVersion(GL::EXT::texture_storage, None);
        _setRequiredVersion(GL::EXT::map_buffer_range, None);
        _setRequiredVersion(GL::EXT::instanced_arrays, None);
        _setRequiredVersion(GL::EXT::draw_instanced, None);
        _setRequiredVersion(GL::NV::draw_buffers, None);
        _setRequiredVersion(GL::NV::fbo_color_attachments, None); // ??
        _setRequiredVersion(GL::NV::read_buffer, None);
        _setRequiredVersion(GL::NV::draw_instanced, None);
        _setRequiredVersion(GL::NV::framebuffer_blit, None);
        _setRequiredVersion(GL::NV::framebuffer_multisample, None);
        _setRequiredVersion(GL::NV::instanced_arrays, None);
        _setRequiredVersion(GL::OES::texture_3D, None);
        _setRequiredVersion(GL::OES::vertex_array_object, None);
    }
    #endif

    #undef _setRequiredVersion
}

}
