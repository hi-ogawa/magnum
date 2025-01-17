/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019
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

#include "flextGL.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GL_ARB_ES3_2_compatibility */
FLEXTGL_EXPORT void(APIENTRY *flextglPrimitiveBoundingBoxARB)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = nullptr;

/* GL_ARB_bindless_texture */
FLEXTGL_EXPORT GLuint64(APIENTRY *flextglGetImageHandleARB)(GLuint, GLint, GLboolean, GLint, GLenum) = nullptr;
FLEXTGL_EXPORT GLuint64(APIENTRY *flextglGetTextureHandleARB)(GLuint) = nullptr;
FLEXTGL_EXPORT GLuint64(APIENTRY *flextglGetTextureSamplerHandleARB)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribLui64vARB)(GLuint, GLenum, GLuint64EXT *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsImageHandleResidentARB)(GLuint64) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsTextureHandleResidentARB)(GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMakeImageHandleNonResidentARB)(GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMakeImageHandleResidentARB)(GLuint64, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMakeTextureHandleNonResidentARB)(GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMakeTextureHandleResidentARB)(GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformHandleui64ARB)(GLuint, GLint, GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformHandleui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformHandleui64ARB)(GLint, GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformHandleui64vARB)(GLint, GLsizei, const GLuint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL1ui64ARB)(GLuint, GLuint64EXT) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL1ui64vARB)(GLuint, const GLuint64EXT *) = nullptr;

/* GL_ARB_compute_variable_group_size */
FLEXTGL_EXPORT void(APIENTRY *flextglDispatchComputeGroupSizeARB)(GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = nullptr;

/* GL_ARB_robustness */
FLEXTGL_EXPORT GLenum(APIENTRY *flextglGetGraphicsResetStatusARB)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnCompressedTexImageARB)(GLenum, GLint, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnTexImageARB)(GLenum, GLint, GLenum, GLenum, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformdvARB)(GLuint, GLint, GLsizei, GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformfvARB)(GLuint, GLint, GLsizei, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformivARB)(GLuint, GLint, GLsizei, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformuivARB)(GLuint, GLint, GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglReadnPixelsARB)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) = nullptr;

/* GL_ARB_sparse_buffer */
FLEXTGL_EXPORT void(APIENTRY *flextglBufferPageCommitmentARB)(GLenum, GLintptr, GLsizeiptr, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedBufferPageCommitmentARB)(GLuint, GLintptr, GLsizeiptr, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedBufferPageCommitmentEXT)(GLuint, GLintptr, GLsizeiptr, GLboolean) = nullptr;

/* GL_ARB_sparse_texture */
FLEXTGL_EXPORT void(APIENTRY *flextglTexPageCommitmentARB)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean) = nullptr;

/* GL_EXT_debug_label */
FLEXTGL_EXPORT void(APIENTRY *flextglGetObjectLabelEXT)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglLabelObjectEXT)(GLenum, GLuint, GLsizei, const GLchar *) = nullptr;

/* GL_EXT_debug_marker */
FLEXTGL_EXPORT void(APIENTRY *flextglInsertEventMarkerEXT)(GLsizei, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPopGroupMarkerEXT)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPushGroupMarkerEXT)(GLsizei, const GLchar *) = nullptr;

/* GL_GREMEDY_string_marker */
FLEXTGL_EXPORT void(APIENTRY *flextglStringMarkerGREMEDY)(GLsizei, const void *) = nullptr;

/* GL_KHR_blend_equation_advanced */
FLEXTGL_EXPORT void(APIENTRY *flextglBlendBarrierKHR)(void) = nullptr;

/* GL_OVR_multiview */
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferTextureMultiviewOVR)(GLenum, GLenum, GLuint, GLint, GLint, GLsizei) = nullptr;

/* GL_VERSION_1_0 */
#undef glBlendFunc
#undef glClear
#undef glClearColor
#undef glClearDepth
#undef glClearStencil
#undef glColorMask
#undef glCullFace
#undef glDepthFunc
#undef glDepthMask
#undef glDepthRange
#undef glDisable
#undef glDrawBuffer
#undef glEnable
#undef glFinish
#undef glFlush
#undef glFrontFace
#undef glGetBooleanv
#undef glGetDoublev
#undef glGetError
#undef glGetFloatv
#undef glGetIntegerv
#undef glGetString
#undef glGetTexImage
#undef glGetTexLevelParameterfv
#undef glGetTexLevelParameteriv
#undef glGetTexParameterfv
#undef glGetTexParameteriv
#undef glHint
#undef glIsEnabled
#undef glLineWidth
#undef glLogicOp
#undef glPixelStoref
#undef glPixelStorei
#undef glPointSize
#undef glPolygonMode
#undef glReadBuffer
#undef glReadPixels
#undef glScissor
#undef glStencilFunc
#undef glStencilMask
#undef glStencilOp
#undef glTexImage1D
#undef glTexImage2D
#undef glTexParameterf
#undef glTexParameterfv
#undef glTexParameteri
#undef glTexParameteriv
#undef glViewport
GLAPI void APIENTRY glBlendFunc(GLenum, GLenum);
GLAPI void APIENTRY glClear(GLbitfield);
GLAPI void APIENTRY glClearColor(GLfloat, GLfloat, GLfloat, GLfloat);
GLAPI void APIENTRY glClearDepth(GLdouble);
GLAPI void APIENTRY glClearStencil(GLint);
GLAPI void APIENTRY glColorMask(GLboolean, GLboolean, GLboolean, GLboolean);
GLAPI void APIENTRY glCullFace(GLenum);
GLAPI void APIENTRY glDepthFunc(GLenum);
GLAPI void APIENTRY glDepthMask(GLboolean);
GLAPI void APIENTRY glDepthRange(GLdouble, GLdouble);
GLAPI void APIENTRY glDisable(GLenum);
GLAPI void APIENTRY glDrawBuffer(GLenum);
GLAPI void APIENTRY glEnable(GLenum);
GLAPI void APIENTRY glFinish(void);
GLAPI void APIENTRY glFlush(void);
GLAPI void APIENTRY glFrontFace(GLenum);
GLAPI void APIENTRY glGetBooleanv(GLenum, GLboolean *);
GLAPI void APIENTRY glGetDoublev(GLenum, GLdouble *);
GLAPI GLenum APIENTRY glGetError(void);
GLAPI void APIENTRY glGetFloatv(GLenum, GLfloat *);
GLAPI void APIENTRY glGetIntegerv(GLenum, GLint *);
GLAPI const GLubyte * APIENTRY glGetString(GLenum);
GLAPI void APIENTRY glGetTexImage(GLenum, GLint, GLenum, GLenum, void *);
GLAPI void APIENTRY glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *);
GLAPI void APIENTRY glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *);
GLAPI void APIENTRY glGetTexParameterfv(GLenum, GLenum, GLfloat *);
GLAPI void APIENTRY glGetTexParameteriv(GLenum, GLenum, GLint *);
GLAPI void APIENTRY glHint(GLenum, GLenum);
GLAPI GLboolean APIENTRY glIsEnabled(GLenum);
GLAPI void APIENTRY glLineWidth(GLfloat);
GLAPI void APIENTRY glLogicOp(GLenum);
GLAPI void APIENTRY glPixelStoref(GLenum, GLfloat);
GLAPI void APIENTRY glPixelStorei(GLenum, GLint);
GLAPI void APIENTRY glPointSize(GLfloat);
GLAPI void APIENTRY glPolygonMode(GLenum, GLenum);
GLAPI void APIENTRY glReadBuffer(GLenum);
GLAPI void APIENTRY glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
GLAPI void APIENTRY glScissor(GLint, GLint, GLsizei, GLsizei);
GLAPI void APIENTRY glStencilFunc(GLenum, GLint, GLuint);
GLAPI void APIENTRY glStencilMask(GLuint);
GLAPI void APIENTRY glStencilOp(GLenum, GLenum, GLenum);
GLAPI void APIENTRY glTexImage1D(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *);
GLAPI void APIENTRY glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
GLAPI void APIENTRY glTexParameterf(GLenum, GLenum, GLfloat);
GLAPI void APIENTRY glTexParameterfv(GLenum, GLenum, const GLfloat *);
GLAPI void APIENTRY glTexParameteri(GLenum, GLenum, GLint);
GLAPI void APIENTRY glTexParameteriv(GLenum, GLenum, const GLint *);
GLAPI void APIENTRY glViewport(GLint, GLint, GLsizei, GLsizei);
FLEXTGL_EXPORT void(APIENTRY *flextglBlendFunc)(GLenum, GLenum) = glBlendFunc;
FLEXTGL_EXPORT void(APIENTRY *flextglClear)(GLbitfield) = glClear;
FLEXTGL_EXPORT void(APIENTRY *flextglClearColor)(GLfloat, GLfloat, GLfloat, GLfloat) = glClearColor;
FLEXTGL_EXPORT void(APIENTRY *flextglClearDepth)(GLdouble) = glClearDepth;
FLEXTGL_EXPORT void(APIENTRY *flextglClearStencil)(GLint) = glClearStencil;
FLEXTGL_EXPORT void(APIENTRY *flextglColorMask)(GLboolean, GLboolean, GLboolean, GLboolean) = glColorMask;
FLEXTGL_EXPORT void(APIENTRY *flextglCullFace)(GLenum) = glCullFace;
FLEXTGL_EXPORT void(APIENTRY *flextglDepthFunc)(GLenum) = glDepthFunc;
FLEXTGL_EXPORT void(APIENTRY *flextglDepthMask)(GLboolean) = glDepthMask;
FLEXTGL_EXPORT void(APIENTRY *flextglDepthRange)(GLdouble, GLdouble) = glDepthRange;
FLEXTGL_EXPORT void(APIENTRY *flextglDisable)(GLenum) = glDisable;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawBuffer)(GLenum) = glDrawBuffer;
FLEXTGL_EXPORT void(APIENTRY *flextglEnable)(GLenum) = glEnable;
FLEXTGL_EXPORT void(APIENTRY *flextglFinish)(void) = glFinish;
FLEXTGL_EXPORT void(APIENTRY *flextglFlush)(void) = glFlush;
FLEXTGL_EXPORT void(APIENTRY *flextglFrontFace)(GLenum) = glFrontFace;
FLEXTGL_EXPORT void(APIENTRY *flextglGetBooleanv)(GLenum, GLboolean *) = glGetBooleanv;
FLEXTGL_EXPORT void(APIENTRY *flextglGetDoublev)(GLenum, GLdouble *) = glGetDoublev;
FLEXTGL_EXPORT GLenum(APIENTRY *flextglGetError)(void) = glGetError;
FLEXTGL_EXPORT void(APIENTRY *flextglGetFloatv)(GLenum, GLfloat *) = glGetFloatv;
FLEXTGL_EXPORT void(APIENTRY *flextglGetIntegerv)(GLenum, GLint *) = glGetIntegerv;
FLEXTGL_EXPORT const GLubyte *(APIENTRY *flextglGetString)(GLenum) = glGetString;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexImage)(GLenum, GLint, GLenum, GLenum, void *) = glGetTexImage;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexLevelParameterfv)(GLenum, GLint, GLenum, GLfloat *) = glGetTexLevelParameterfv;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexLevelParameteriv)(GLenum, GLint, GLenum, GLint *) = glGetTexLevelParameteriv;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexParameterfv)(GLenum, GLenum, GLfloat *) = glGetTexParameterfv;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexParameteriv)(GLenum, GLenum, GLint *) = glGetTexParameteriv;
FLEXTGL_EXPORT void(APIENTRY *flextglHint)(GLenum, GLenum) = glHint;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsEnabled)(GLenum) = glIsEnabled;
FLEXTGL_EXPORT void(APIENTRY *flextglLineWidth)(GLfloat) = glLineWidth;
FLEXTGL_EXPORT void(APIENTRY *flextglLogicOp)(GLenum) = glLogicOp;
FLEXTGL_EXPORT void(APIENTRY *flextglPixelStoref)(GLenum, GLfloat) = glPixelStoref;
FLEXTGL_EXPORT void(APIENTRY *flextglPixelStorei)(GLenum, GLint) = glPixelStorei;
FLEXTGL_EXPORT void(APIENTRY *flextglPointSize)(GLfloat) = glPointSize;
FLEXTGL_EXPORT void(APIENTRY *flextglPolygonMode)(GLenum, GLenum) = glPolygonMode;
FLEXTGL_EXPORT void(APIENTRY *flextglReadBuffer)(GLenum) = glReadBuffer;
FLEXTGL_EXPORT void(APIENTRY *flextglReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *) = glReadPixels;
FLEXTGL_EXPORT void(APIENTRY *flextglScissor)(GLint, GLint, GLsizei, GLsizei) = glScissor;
FLEXTGL_EXPORT void(APIENTRY *flextglStencilFunc)(GLenum, GLint, GLuint) = glStencilFunc;
FLEXTGL_EXPORT void(APIENTRY *flextglStencilMask)(GLuint) = glStencilMask;
FLEXTGL_EXPORT void(APIENTRY *flextglStencilOp)(GLenum, GLenum, GLenum) = glStencilOp;
FLEXTGL_EXPORT void(APIENTRY *flextglTexImage1D)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *) = glTexImage1D;
FLEXTGL_EXPORT void(APIENTRY *flextglTexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = glTexImage2D;
FLEXTGL_EXPORT void(APIENTRY *flextglTexParameterf)(GLenum, GLenum, GLfloat) = glTexParameterf;
FLEXTGL_EXPORT void(APIENTRY *flextglTexParameterfv)(GLenum, GLenum, const GLfloat *) = glTexParameterfv;
FLEXTGL_EXPORT void(APIENTRY *flextglTexParameteri)(GLenum, GLenum, GLint) = glTexParameteri;
FLEXTGL_EXPORT void(APIENTRY *flextglTexParameteriv)(GLenum, GLenum, const GLint *) = glTexParameteriv;
FLEXTGL_EXPORT void(APIENTRY *flextglViewport)(GLint, GLint, GLsizei, GLsizei) = glViewport;

/* GL_VERSION_1_1 */
#undef glBindTexture
#undef glCopyTexImage1D
#undef glCopyTexImage2D
#undef glCopyTexSubImage1D
#undef glCopyTexSubImage2D
#undef glDeleteTextures
#undef glDrawArrays
#undef glDrawElements
#undef glGenTextures
#undef glIsTexture
#undef glPolygonOffset
#undef glTexSubImage1D
#undef glTexSubImage2D
GLAPI void APIENTRY glBindTexture(GLenum, GLuint);
GLAPI void APIENTRY glCopyTexImage1D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
GLAPI void APIENTRY glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
GLAPI void APIENTRY glCopyTexSubImage1D(GLenum, GLint, GLint, GLint, GLint, GLsizei);
GLAPI void APIENTRY glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
GLAPI void APIENTRY glDeleteTextures(GLsizei, const GLuint *);
GLAPI void APIENTRY glDrawArrays(GLenum, GLint, GLsizei);
GLAPI void APIENTRY glDrawElements(GLenum, GLsizei, GLenum, const void *);
GLAPI void APIENTRY glGenTextures(GLsizei, GLuint *);
GLAPI GLboolean APIENTRY glIsTexture(GLuint);
GLAPI void APIENTRY glPolygonOffset(GLfloat, GLfloat);
GLAPI void APIENTRY glTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *);
GLAPI void APIENTRY glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
FLEXTGL_EXPORT void(APIENTRY *flextglBindTexture)(GLenum, GLuint) = glBindTexture;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTexImage1D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = glCopyTexImage1D;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = glCopyTexImage2D;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTexSubImage1D)(GLenum, GLint, GLint, GLint, GLint, GLsizei) = glCopyTexSubImage1D;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = glCopyTexSubImage2D;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteTextures)(GLsizei, const GLuint *) = glDeleteTextures;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawArrays)(GLenum, GLint, GLsizei) = glDrawArrays;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElements)(GLenum, GLsizei, GLenum, const void *) = glDrawElements;
FLEXTGL_EXPORT void(APIENTRY *flextglGenTextures)(GLsizei, GLuint *) = glGenTextures;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsTexture)(GLuint) = glIsTexture;
FLEXTGL_EXPORT void(APIENTRY *flextglPolygonOffset)(GLfloat, GLfloat) = glPolygonOffset;
FLEXTGL_EXPORT void(APIENTRY *flextglTexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *) = glTexSubImage1D;
FLEXTGL_EXPORT void(APIENTRY *flextglTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = glTexSubImage2D;

/* GL_VERSION_1_2 */
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawRangeElements)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexImage3D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = nullptr;

/* GL_VERSION_1_3 */
FLEXTGL_EXPORT void(APIENTRY *flextglActiveTexture)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTexImage1D)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTexImage3D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetCompressedTexImage)(GLenum, GLint, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSampleCoverage)(GLfloat, GLboolean) = nullptr;

/* GL_VERSION_1_4 */
FLEXTGL_EXPORT void(APIENTRY *flextglBlendColor)(GLfloat, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendEquation)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawArrays)(GLenum, const GLint *, const GLsizei *, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawElements)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPointParameterf)(GLenum, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPointParameterfv)(GLenum, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPointParameteri)(GLenum, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPointParameteriv)(GLenum, const GLint *) = nullptr;

/* GL_VERSION_1_5 */
FLEXTGL_EXPORT void(APIENTRY *flextglBeginQuery)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindBuffer)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBufferData)(GLenum, GLsizeiptr, const void *, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBufferSubData)(GLenum, GLintptr, GLsizeiptr, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteBuffers)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteQueries)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEndQuery)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenBuffers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenQueries)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetBufferParameteriv)(GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetBufferPointerv)(GLenum, GLenum, void **) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetBufferSubData)(GLenum, GLintptr, GLsizeiptr, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryObjectiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryObjectuiv)(GLuint, GLenum, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryiv)(GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsBuffer)(GLuint) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsQuery)(GLuint) = nullptr;
FLEXTGL_EXPORT void *(APIENTRY *flextglMapBuffer)(GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglUnmapBuffer)(GLenum) = nullptr;

/* GL_VERSION_2_0 */
FLEXTGL_EXPORT void(APIENTRY *flextglAttachShader)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindAttribLocation)(GLuint, GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendEquationSeparate)(GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompileShader)(GLuint) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglCreateProgram)(void) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglCreateShader)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteProgram)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteShader)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDetachShader)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDisableVertexAttribArray)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawBuffers)(GLsizei, const GLenum *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEnableVertexAttribArray)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveAttrib)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetAttachedShaders)(GLuint, GLsizei, GLsizei *, GLuint *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetAttribLocation)(GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetShaderSource)(GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetShaderiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetUniformLocation)(GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetUniformfv)(GLuint, GLint, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetUniformiv)(GLuint, GLint, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribPointerv)(GLuint, GLenum, void **) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribdv)(GLuint, GLenum, GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribfv)(GLuint, GLenum, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsProgram)(GLuint) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsShader)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglLinkProgram)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglShaderSource)(GLuint, GLsizei, const GLchar *const*, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglStencilFuncSeparate)(GLenum, GLenum, GLint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglStencilMaskSeparate)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglStencilOpSeparate)(GLenum, GLenum, GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1f)(GLint, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1fv)(GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1i)(GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1iv)(GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2f)(GLint, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2fv)(GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2i)(GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2iv)(GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3f)(GLint, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3fv)(GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3i)(GLint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3iv)(GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4fv)(GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4i)(GLint, GLint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4iv)(GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUseProgram)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglValidateProgram)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib1d)(GLuint, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib1dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib1f)(GLuint, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib1fv)(GLuint, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib1s)(GLuint, GLshort) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib1sv)(GLuint, const GLshort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib2d)(GLuint, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib2dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib2f)(GLuint, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib2fv)(GLuint, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib2s)(GLuint, GLshort, GLshort) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib2sv)(GLuint, const GLshort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib3d)(GLuint, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib3dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib3fv)(GLuint, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib3s)(GLuint, GLshort, GLshort, GLshort) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib3sv)(GLuint, const GLshort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Nbv)(GLuint, const GLbyte *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Niv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Nsv)(GLuint, const GLshort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Nub)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Nubv)(GLuint, const GLubyte *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Nuiv)(GLuint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4Nusv)(GLuint, const GLushort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4bv)(GLuint, const GLbyte *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4fv)(GLuint, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4iv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4s)(GLuint, GLshort, GLshort, GLshort, GLshort) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4sv)(GLuint, const GLshort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4ubv)(GLuint, const GLubyte *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4uiv)(GLuint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttrib4usv)(GLuint, const GLushort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *) = nullptr;

/* GL_VERSION_2_1 */
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix2x3fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix2x4fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix3x2fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix3x4fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix4x2fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix4x3fv)(GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;

/* GL_VERSION_3_0 */
FLEXTGL_EXPORT void(APIENTRY *flextglBeginConditionalRender)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBeginTransformFeedback)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindBufferBase)(GLenum, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindBufferRange)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindFragDataLocation)(GLuint, GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindFramebuffer)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindRenderbuffer)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindVertexArray)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlitFramebuffer)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) = nullptr;
FLEXTGL_EXPORT GLenum(APIENTRY *flextglCheckFramebufferStatus)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClampColor)(GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearBufferfi)(GLenum, GLint, GLfloat, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearBufferfv)(GLenum, GLint, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearBufferiv)(GLenum, GLint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearBufferuiv)(GLenum, GLint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglColorMaski)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteFramebuffers)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteRenderbuffers)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteVertexArrays)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDisablei)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEnablei)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEndConditionalRender)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEndTransformFeedback)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFlushMappedBufferRange)(GLenum, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferTexture1D)(GLenum, GLenum, GLenum, GLuint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferTexture3D)(GLenum, GLenum, GLenum, GLuint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferTextureLayer)(GLenum, GLenum, GLuint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenFramebuffers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenRenderbuffers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenVertexArrays)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenerateMipmap)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetBooleani_v)(GLenum, GLuint, GLboolean *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetFragDataLocation)(GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetIntegeri_v)(GLenum, GLuint, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetRenderbufferParameteriv)(GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT const GLubyte *(APIENTRY *flextglGetStringi)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexParameterIiv)(GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTexParameterIuiv)(GLenum, GLenum, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTransformFeedbackVarying)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetUniformuiv)(GLuint, GLint, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribIiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribIuiv)(GLuint, GLenum, GLuint *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsEnabledi)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsFramebuffer)(GLuint) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsRenderbuffer)(GLuint) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsVertexArray)(GLuint) = nullptr;
FLEXTGL_EXPORT void *(APIENTRY *flextglMapBufferRange)(GLenum, GLintptr, GLsizeiptr, GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglRenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglRenderbufferStorageMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexParameterIiv)(GLenum, GLenum, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexParameterIuiv)(GLenum, GLenum, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTransformFeedbackVaryings)(GLuint, GLsizei, const GLchar *const*, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1ui)(GLint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1uiv)(GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2ui)(GLint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2uiv)(GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3ui)(GLint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3uiv)(GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4ui)(GLint, GLuint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4uiv)(GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI1i)(GLuint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI1iv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI1ui)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI1uiv)(GLuint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI2i)(GLuint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI2iv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI2ui)(GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI2uiv)(GLuint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI3i)(GLuint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI3iv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI3ui)(GLuint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI3uiv)(GLuint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4bv)(GLuint, const GLbyte *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4i)(GLuint, GLint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4iv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4sv)(GLuint, const GLshort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4ubv)(GLuint, const GLubyte *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4ui)(GLuint, GLuint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4uiv)(GLuint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribI4usv)(GLuint, const GLushort *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribIPointer)(GLuint, GLint, GLenum, GLsizei, const void *) = nullptr;

/* GL_VERSION_3_1 */
FLEXTGL_EXPORT void(APIENTRY *flextglCopyBufferSubData)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawArraysInstanced)(GLenum, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElementsInstanced)(GLenum, GLsizei, GLenum, const void *, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveUniformBlockName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveUniformBlockiv)(GLuint, GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveUniformName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveUniformsiv)(GLuint, GLsizei, const GLuint *, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglGetUniformBlockIndex)(GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetUniformIndices)(GLuint, GLsizei, const GLchar *const*, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPrimitiveRestartIndex)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexBuffer)(GLenum, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformBlockBinding)(GLuint, GLuint, GLuint) = nullptr;

/* GL_VERSION_3_2 */
FLEXTGL_EXPORT GLenum(APIENTRY *flextglClientWaitSync)(GLsync, GLbitfield, GLuint64) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteSync)(GLsync) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElementsBaseVertex)(GLenum, GLsizei, GLenum, const void *, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElementsInstancedBaseVertex)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawRangeElementsBaseVertex)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint) = nullptr;
FLEXTGL_EXPORT GLsync(APIENTRY *flextglFenceSync)(GLenum, GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferTexture)(GLenum, GLenum, GLuint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetBufferParameteri64v)(GLenum, GLenum, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetInteger64i_v)(GLenum, GLuint, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetInteger64v)(GLenum, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetMultisamplefv)(GLenum, GLuint, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetSynciv)(GLsync, GLenum, GLsizei, GLsizei *, GLint *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsSync)(GLsync) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawElementsBaseVertex)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProvokingVertex)(GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSampleMaski)(GLuint, GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexImage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexImage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglWaitSync)(GLsync, GLbitfield, GLuint64) = nullptr;

/* GL_VERSION_3_3 */
FLEXTGL_EXPORT void(APIENTRY *flextglBindFragDataLocationIndexed)(GLuint, GLuint, GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindSampler)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteSamplers)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenSamplers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetFragDataIndex)(GLuint, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryObjecti64v)(GLuint, GLenum, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryObjectui64v)(GLuint, GLenum, GLuint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetSamplerParameterIiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetSamplerParameterIuiv)(GLuint, GLenum, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetSamplerParameterfv)(GLuint, GLenum, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetSamplerParameteriv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsSampler)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglQueryCounter)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSamplerParameterIiv)(GLuint, GLenum, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSamplerParameterIuiv)(GLuint, GLenum, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSamplerParameterf)(GLuint, GLenum, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSamplerParameterfv)(GLuint, GLenum, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSamplerParameteri)(GLuint, GLenum, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSamplerParameteriv)(GLuint, GLenum, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribDivisor)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP1ui)(GLuint, GLenum, GLboolean, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP1uiv)(GLuint, GLenum, GLboolean, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP2ui)(GLuint, GLenum, GLboolean, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP2uiv)(GLuint, GLenum, GLboolean, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP3ui)(GLuint, GLenum, GLboolean, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP3uiv)(GLuint, GLenum, GLboolean, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP4ui)(GLuint, GLenum, GLboolean, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribP4uiv)(GLuint, GLenum, GLboolean, const GLuint *) = nullptr;

/* GL_VERSION_4_0 */
FLEXTGL_EXPORT void(APIENTRY *flextglBeginQueryIndexed)(GLenum, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindTransformFeedback)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendEquationSeparatei)(GLuint, GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendEquationi)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendFuncSeparatei)(GLuint, GLenum, GLenum, GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlendFunci)(GLuint, GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteTransformFeedbacks)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawArraysIndirect)(GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElementsIndirect)(GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawTransformFeedback)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawTransformFeedbackStream)(GLenum, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEndQueryIndexed)(GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenTransformFeedbacks)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveSubroutineName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveSubroutineUniformName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveSubroutineUniformiv)(GLuint, GLenum, GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramStageiv)(GLuint, GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryIndexediv)(GLenum, GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglGetSubroutineIndex)(GLuint, GLenum, const GLchar *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetSubroutineUniformLocation)(GLuint, GLenum, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetUniformSubroutineuiv)(GLenum, GLint, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetUniformdv)(GLuint, GLint, GLdouble *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsTransformFeedback)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMinSampleShading)(GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPatchParameterfv)(GLenum, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPatchParameteri)(GLenum, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPauseTransformFeedback)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglResumeTransformFeedback)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1d)(GLint, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform1dv)(GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2d)(GLint, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform2dv)(GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3d)(GLint, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform3dv)(GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4d)(GLint, GLdouble, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniform4dv)(GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix2dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix2x3dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix2x4dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix3dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix3x2dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix3x4dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix4dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix4x2dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformMatrix4x3dv)(GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUniformSubroutinesuiv)(GLenum, GLsizei, const GLuint *) = nullptr;

/* GL_VERSION_4_1 */
FLEXTGL_EXPORT void(APIENTRY *flextglActiveShaderProgram)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindProgramPipeline)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearDepthf)(GLfloat) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglCreateShaderProgramv)(GLenum, GLsizei, const GLchar *const*) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDeleteProgramPipelines)(GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDepthRangeArrayv)(GLuint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDepthRangeIndexed)(GLuint, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDepthRangef)(GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenProgramPipelines)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetDoublei_v)(GLenum, GLuint, GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetFloati_v)(GLenum, GLuint, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramBinary)(GLuint, GLsizei, GLsizei *, GLenum *, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramPipelineInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramPipelineiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetShaderPrecisionFormat)(GLenum, GLenum, GLint *, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexAttribLdv)(GLuint, GLenum, GLdouble *) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglIsProgramPipeline)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramBinary)(GLuint, GLenum, const void *, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramParameteri)(GLuint, GLenum, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1d)(GLuint, GLint, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1dv)(GLuint, GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1f)(GLuint, GLint, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1fv)(GLuint, GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1i)(GLuint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1iv)(GLuint, GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1ui)(GLuint, GLint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform1uiv)(GLuint, GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2d)(GLuint, GLint, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2dv)(GLuint, GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2f)(GLuint, GLint, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2fv)(GLuint, GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2i)(GLuint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2iv)(GLuint, GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2ui)(GLuint, GLint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform2uiv)(GLuint, GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3d)(GLuint, GLint, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3dv)(GLuint, GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3f)(GLuint, GLint, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3fv)(GLuint, GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3i)(GLuint, GLint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3iv)(GLuint, GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3ui)(GLuint, GLint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform3uiv)(GLuint, GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4d)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4dv)(GLuint, GLint, GLsizei, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4f)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4fv)(GLuint, GLint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4i)(GLuint, GLint, GLint, GLint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4iv)(GLuint, GLint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4ui)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniform4uiv)(GLuint, GLint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix2x3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix2x3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix2x4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix2x4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix3x2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix3x2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix3x4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix3x4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix4x2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix4x2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix4x3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglProgramUniformMatrix4x3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglReleaseShaderCompiler)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglScissorArrayv)(GLuint, GLsizei, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglScissorIndexed)(GLuint, GLint, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglScissorIndexedv)(GLuint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglShaderBinary)(GLsizei, const GLuint *, GLenum, const void *, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglUseProgramStages)(GLuint, GLbitfield, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglValidateProgramPipeline)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL1d)(GLuint, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL1dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL2d)(GLuint, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL2dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL3d)(GLuint, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL3dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribL4dv)(GLuint, const GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribLPointer)(GLuint, GLint, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglViewportArrayv)(GLuint, GLsizei, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglViewportIndexedf)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglViewportIndexedfv)(GLuint, const GLfloat *) = nullptr;

/* GL_VERSION_4_2 */
FLEXTGL_EXPORT void(APIENTRY *flextglBindImageTexture)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawArraysInstancedBaseInstance)(GLenum, GLint, GLsizei, GLsizei, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElementsInstancedBaseInstance)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawElementsInstancedBaseVertexBaseInstance)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawTransformFeedbackInstanced)(GLenum, GLuint, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDrawTransformFeedbackStreamInstanced)(GLenum, GLuint, GLuint, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetActiveAtomicCounterBufferiv)(GLuint, GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetInternalformativ)(GLenum, GLenum, GLenum, GLsizei, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMemoryBarrier)(GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexStorage1D)(GLenum, GLsizei, GLenum, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexStorage2D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexStorage3D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = nullptr;

/* GL_VERSION_4_3 */
FLEXTGL_EXPORT void(APIENTRY *flextglBindVertexBuffer)(GLuint, GLuint, GLintptr, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearBufferData)(GLenum, GLenum, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearBufferSubData)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyImageSubData)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDebugMessageCallback)(GLDEBUGPROC, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDebugMessageControl)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDebugMessageInsert)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDispatchCompute)(GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDispatchComputeIndirect)(GLintptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFramebufferParameteri)(GLenum, GLenum, GLint) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglGetDebugMessageLog)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetFramebufferParameteriv)(GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetInternalformati64v)(GLenum, GLenum, GLenum, GLsizei, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetObjectLabel)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetObjectPtrLabel)(const void *, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetPointerv)(GLenum, void **) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramInterfaceiv)(GLuint, GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT GLuint(APIENTRY *flextglGetProgramResourceIndex)(GLuint, GLenum, const GLchar *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetProgramResourceLocation)(GLuint, GLenum, const GLchar *) = nullptr;
FLEXTGL_EXPORT GLint(APIENTRY *flextglGetProgramResourceLocationIndex)(GLuint, GLenum, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramResourceName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetProgramResourceiv)(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateBufferData)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateBufferSubData)(GLuint, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateFramebuffer)(GLenum, GLsizei, const GLenum *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateSubFramebuffer)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateTexImage)(GLuint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawArraysIndirect)(GLenum, const void *, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawElementsIndirect)(GLenum, GLenum, const void *, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglObjectLabel)(GLenum, GLuint, GLsizei, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglObjectPtrLabel)(const void *, GLsizei, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPopDebugGroup)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPushDebugGroup)(GLenum, GLuint, GLsizei, const GLchar *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglShaderStorageBlockBinding)(GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexBufferRange)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexStorage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTexStorage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureView)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribBinding)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribFormat)(GLuint, GLint, GLenum, GLboolean, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribIFormat)(GLuint, GLint, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexAttribLFormat)(GLuint, GLint, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexBindingDivisor)(GLuint, GLuint) = nullptr;

/* GL_VERSION_4_4 */
FLEXTGL_EXPORT void(APIENTRY *flextglBindBuffersBase)(GLenum, GLuint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindBuffersRange)(GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindImageTextures)(GLuint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindSamplers)(GLuint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindTextures)(GLuint, GLsizei, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBindVertexBuffers)(GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBufferStorage)(GLenum, GLsizeiptr, const void *, GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearTexImage)(GLuint, GLint, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = nullptr;

/* GL_VERSION_4_5 */
FLEXTGL_EXPORT void(APIENTRY *flextglBindTextureUnit)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglBlitNamedFramebuffer)(GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) = nullptr;
FLEXTGL_EXPORT GLenum(APIENTRY *flextglCheckNamedFramebufferStatus)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearNamedBufferData)(GLuint, GLenum, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearNamedBufferSubData)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearNamedFramebufferfi)(GLuint, GLenum, GLint, GLfloat, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearNamedFramebufferfv)(GLuint, GLenum, GLint, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearNamedFramebufferiv)(GLuint, GLenum, GLint, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClearNamedFramebufferuiv)(GLuint, GLenum, GLint, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglClipControl)(GLenum, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTextureSubImage1D)(GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCompressedTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyNamedBufferSubData)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTextureSubImage1D)(GLuint, GLint, GLint, GLint, GLint, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCopyTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateBuffers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateFramebuffers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateProgramPipelines)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateQueries)(GLenum, GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateRenderbuffers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateSamplers)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateTextures)(GLenum, GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateTransformFeedbacks)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglCreateVertexArrays)(GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglDisableVertexArrayAttrib)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglEnableVertexArrayAttrib)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglFlushMappedNamedBufferRange)(GLuint, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGenerateTextureMipmap)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetCompressedTextureImage)(GLuint, GLint, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetCompressedTextureSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT GLenum(APIENTRY *flextglGetGraphicsResetStatus)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedBufferParameteri64v)(GLuint, GLenum, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedBufferParameteriv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedBufferPointerv)(GLuint, GLenum, void **) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedBufferSubData)(GLuint, GLintptr, GLsizeiptr, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedFramebufferAttachmentParameteriv)(GLuint, GLenum, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedFramebufferParameteriv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetNamedRenderbufferParameteriv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryBufferObjecti64v)(GLuint, GLuint, GLenum, GLintptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryBufferObjectiv)(GLuint, GLuint, GLenum, GLintptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryBufferObjectui64v)(GLuint, GLuint, GLenum, GLintptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetQueryBufferObjectuiv)(GLuint, GLuint, GLenum, GLintptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureImage)(GLuint, GLint, GLenum, GLenum, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureLevelParameterfv)(GLuint, GLint, GLenum, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureLevelParameteriv)(GLuint, GLint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureParameterIiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureParameterIuiv)(GLuint, GLenum, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureParameterfv)(GLuint, GLenum, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureParameteriv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTextureSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTransformFeedbacki64_v)(GLuint, GLenum, GLuint, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTransformFeedbacki_v)(GLuint, GLenum, GLuint, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetTransformFeedbackiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexArrayIndexed64iv)(GLuint, GLuint, GLenum, GLint64 *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexArrayIndexediv)(GLuint, GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetVertexArrayiv)(GLuint, GLenum, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnCompressedTexImage)(GLenum, GLint, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnTexImage)(GLenum, GLint, GLenum, GLenum, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformdv)(GLuint, GLint, GLsizei, GLdouble *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformfv)(GLuint, GLint, GLsizei, GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformiv)(GLuint, GLint, GLsizei, GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglGetnUniformuiv)(GLuint, GLint, GLsizei, GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateNamedFramebufferData)(GLuint, GLsizei, const GLenum *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglInvalidateNamedFramebufferSubData)(GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void *(APIENTRY *flextglMapNamedBuffer)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void *(APIENTRY *flextglMapNamedBufferRange)(GLuint, GLintptr, GLsizeiptr, GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMemoryBarrierByRegion)(GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedBufferData)(GLuint, GLsizeiptr, const void *, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedBufferStorage)(GLuint, GLsizeiptr, const void *, GLbitfield) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedBufferSubData)(GLuint, GLintptr, GLsizeiptr, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferDrawBuffer)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferDrawBuffers)(GLuint, GLsizei, const GLenum *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferParameteri)(GLuint, GLenum, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferReadBuffer)(GLuint, GLenum) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferRenderbuffer)(GLuint, GLenum, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferTexture)(GLuint, GLenum, GLuint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedFramebufferTextureLayer)(GLuint, GLenum, GLuint, GLint, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedRenderbufferStorage)(GLuint, GLenum, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglNamedRenderbufferStorageMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglReadnPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureBarrier)(void) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureBuffer)(GLuint, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureBufferRange)(GLuint, GLenum, GLuint, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureParameterIiv)(GLuint, GLenum, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureParameterIuiv)(GLuint, GLenum, const GLuint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureParameterf)(GLuint, GLenum, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureParameterfv)(GLuint, GLenum, const GLfloat *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureParameteri)(GLuint, GLenum, GLint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureParameteriv)(GLuint, GLenum, const GLint *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureStorage1D)(GLuint, GLsizei, GLenum, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureStorage2D)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureStorage2DMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureStorage3D)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureStorage3DMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureSubImage1D)(GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTransformFeedbackBufferBase)(GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglTransformFeedbackBufferRange)(GLuint, GLuint, GLuint, GLintptr, GLsizeiptr) = nullptr;
FLEXTGL_EXPORT GLboolean(APIENTRY *flextglUnmapNamedBuffer)(GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayAttribBinding)(GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayAttribFormat)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayAttribIFormat)(GLuint, GLuint, GLint, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayAttribLFormat)(GLuint, GLuint, GLint, GLenum, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayBindingDivisor)(GLuint, GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayElementBuffer)(GLuint, GLuint) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayVertexBuffer)(GLuint, GLuint, GLuint, GLintptr, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglVertexArrayVertexBuffers)(GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *) = nullptr;

/* GL_VERSION_4_6 */
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawArraysIndirectCount)(GLenum, const void *, GLintptr, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglMultiDrawElementsIndirectCount)(GLenum, GLenum, const void *, GLintptr, GLsizei, GLsizei) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglPolygonOffsetClamp)(GLfloat, GLfloat, GLfloat) = nullptr;
FLEXTGL_EXPORT void(APIENTRY *flextglSpecializeShader)(GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *) = nullptr;

#ifdef __cplusplus
}
#endif
