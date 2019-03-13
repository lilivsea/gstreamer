


#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "gl-enumtypes.h"

#include "gstglwindow.h" 
#include "gstgldisplay.h" 
#include "gstglcontext.h" 
#include "gstgldebug.h" 
#include "gstglbasememory.h" 
#include "gstglbuffer.h" 
#include "gstglmemory.h" 
#include "gstglmemorypbo.h" 
#include "gstglrenderbuffer.h" 
#include "gstglbufferpool.h" 
#include "gstglfilter.h" 
#include "gstglformat.h" 
#include "gstglbasefilter.h" 
#include "gstglshader.h" 
#include "gstglshaderstrings.h" 
#include "gstglsl.h" 
#include "gstglslstage.h" 
#include "gstglcolorconvert.h" 
#include "gstglupload.h" 
#include "gstglapi.h" 
#include "gstglfeature.h" 
#include "gstglutils.h" 
#include "gstglframebuffer.h" 
#include "gstglsyncmeta.h" 
#include "gstglviewconvert.h" 
#include "gstgloverlaycompositor.h" 
#include "gstglquery.h" 
#include "gstgl_fwd.h" 
#include "gstgl_enums.h" 
#include "gl-prelude.h" 
#include "gl.h"

/* enumerations from "gstglwindow.h" */
GType
gst_gl_window_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_WINDOW_ERROR_FAILED, "GST_GL_WINDOW_ERROR_FAILED", "failed" },
      { GST_GL_WINDOW_ERROR_OLD_LIBS, "GST_GL_WINDOW_ERROR_OLD_LIBS", "old-libs" },
      { GST_GL_WINDOW_ERROR_RESOURCE_UNAVAILABLE, "GST_GL_WINDOW_ERROR_RESOURCE_UNAVAILABLE", "resource-unavailable" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLWindowError", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstgldisplay.h" */
GType
gst_gl_display_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_GL_DISPLAY_TYPE_NONE, "GST_GL_DISPLAY_TYPE_NONE", "none" },
      { GST_GL_DISPLAY_TYPE_X11, "GST_GL_DISPLAY_TYPE_X11", "x11" },
      { GST_GL_DISPLAY_TYPE_WAYLAND, "GST_GL_DISPLAY_TYPE_WAYLAND", "wayland" },
      { GST_GL_DISPLAY_TYPE_COCOA, "GST_GL_DISPLAY_TYPE_COCOA", "cocoa" },
      { GST_GL_DISPLAY_TYPE_WIN32, "GST_GL_DISPLAY_TYPE_WIN32", "win32" },
      { GST_GL_DISPLAY_TYPE_DISPMANX, "GST_GL_DISPLAY_TYPE_DISPMANX", "dispmanx" },
      { GST_GL_DISPLAY_TYPE_EGL, "GST_GL_DISPLAY_TYPE_EGL", "egl" },
      { GST_GL_DISPLAY_TYPE_VIV_FB, "GST_GL_DISPLAY_TYPE_VIV_FB", "viv-fb" },
      { GST_GL_DISPLAY_TYPE_GBM, "GST_GL_DISPLAY_TYPE_GBM", "gbm" },
      { GST_GL_DISPLAY_TYPE_ANY, "GST_GL_DISPLAY_TYPE_ANY", "any" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstGLDisplayType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglcontext.h" */
GType
gst_gl_context_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_CONTEXT_ERROR_FAILED, "GST_GL_CONTEXT_ERROR_FAILED", "failed" },
      { GST_GL_CONTEXT_ERROR_WRONG_CONFIG, "GST_GL_CONTEXT_ERROR_WRONG_CONFIG", "wrong-config" },
      { GST_GL_CONTEXT_ERROR_WRONG_API, "GST_GL_CONTEXT_ERROR_WRONG_API", "wrong-api" },
      { GST_GL_CONTEXT_ERROR_OLD_LIBS, "GST_GL_CONTEXT_ERROR_OLD_LIBS", "old-libs" },
      { GST_GL_CONTEXT_ERROR_CREATE_CONTEXT, "GST_GL_CONTEXT_ERROR_CREATE_CONTEXT", "create-context" },
      { GST_GL_CONTEXT_ERROR_RESOURCE_UNAVAILABLE, "GST_GL_CONTEXT_ERROR_RESOURCE_UNAVAILABLE", "resource-unavailable" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLContextError", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglbasememory.h" */
GType
gst_gl_base_memory_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_BASE_MEMORY_ERROR_FAILED, "GST_GL_BASE_MEMORY_ERROR_FAILED", "failed" },
      { GST_GL_BASE_MEMORY_ERROR_OLD_LIBS, "GST_GL_BASE_MEMORY_ERROR_OLD_LIBS", "old-libs" },
      { GST_GL_BASE_MEMORY_ERROR_RESOURCE_UNAVAILABLE, "GST_GL_BASE_MEMORY_ERROR_RESOURCE_UNAVAILABLE", "resource-unavailable" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLBaseMemoryError", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_gl_base_memory_transfer_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_GL_BASE_MEMORY_TRANSFER_NEED_DOWNLOAD, "GST_GL_BASE_MEMORY_TRANSFER_NEED_DOWNLOAD", "download" },
      { GST_GL_BASE_MEMORY_TRANSFER_NEED_UPLOAD, "GST_GL_BASE_MEMORY_TRANSFER_NEED_UPLOAD", "upload" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstGLBaseMemoryTransfer", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglformat.h" */
GType
gst_gl_format_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_LUMINANCE, "GST_GL_LUMINANCE", "luminance" },
      { GST_GL_ALPHA, "GST_GL_ALPHA", "alpha" },
      { GST_GL_LUMINANCE_ALPHA, "GST_GL_LUMINANCE_ALPHA", "luminance-alpha" },
      { GST_GL_RED, "GST_GL_RED", "red" },
      { GST_GL_R8, "GST_GL_R8", "r8" },
      { GST_GL_RG, "GST_GL_RG", "rg" },
      { GST_GL_RG8, "GST_GL_RG8", "rg8" },
      { GST_GL_RGB, "GST_GL_RGB", "rgb" },
      { GST_GL_RGB8, "GST_GL_RGB8", "rgb8" },
      { GST_GL_RGB565, "GST_GL_RGB565", "rgb565" },
      { GST_GL_RGB16, "GST_GL_RGB16", "rgb16" },
      { GST_GL_RGBA, "GST_GL_RGBA", "rgba" },
      { GST_GL_RGBA8, "GST_GL_RGBA8", "rgba8" },
      { GST_GL_RGBA16, "GST_GL_RGBA16", "rgba16" },
      { GST_GL_DEPTH_COMPONENT16, "GST_GL_DEPTH_COMPONENT16", "depth-component16" },
      { GST_GL_DEPTH24_STENCIL8, "GST_GL_DEPTH24_STENCIL8", "depth24-stencil8" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLFormat", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglsl.h" */
GType
gst_glsl_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GLSL_ERROR_COMPILE, "GST_GLSL_ERROR_COMPILE", "compile" },
      { GST_GLSL_ERROR_LINK, "GST_GLSL_ERROR_LINK", "link" },
      { GST_GLSL_ERROR_PROGRAM, "GST_GLSL_ERROR_PROGRAM", "program" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLSLError", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_glsl_version_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GLSL_VERSION_NONE, "GST_GLSL_VERSION_NONE", "none" },
      { GST_GLSL_VERSION_100, "GST_GLSL_VERSION_100", "100" },
      { GST_GLSL_VERSION_110, "GST_GLSL_VERSION_110", "110" },
      { GST_GLSL_VERSION_120, "GST_GLSL_VERSION_120", "120" },
      { GST_GLSL_VERSION_130, "GST_GLSL_VERSION_130", "130" },
      { GST_GLSL_VERSION_140, "GST_GLSL_VERSION_140", "140" },
      { GST_GLSL_VERSION_150, "GST_GLSL_VERSION_150", "150" },
      { GST_GLSL_VERSION_300, "GST_GLSL_VERSION_300", "300" },
      { GST_GLSL_VERSION_310, "GST_GLSL_VERSION_310", "310" },
      { GST_GLSL_VERSION_320, "GST_GLSL_VERSION_320", "320" },
      { GST_GLSL_VERSION_330, "GST_GLSL_VERSION_330", "330" },
      { GST_GLSL_VERSION_400, "GST_GLSL_VERSION_400", "400" },
      { GST_GLSL_VERSION_410, "GST_GLSL_VERSION_410", "410" },
      { GST_GLSL_VERSION_420, "GST_GLSL_VERSION_420", "420" },
      { GST_GLSL_VERSION_430, "GST_GLSL_VERSION_430", "430" },
      { GST_GLSL_VERSION_440, "GST_GLSL_VERSION_440", "440" },
      { GST_GLSL_VERSION_450, "GST_GLSL_VERSION_450", "450" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLSLVersion", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_glsl_profile_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_GLSL_PROFILE_NONE, "GST_GLSL_PROFILE_NONE", "none" },
      { GST_GLSL_PROFILE_ES, "GST_GLSL_PROFILE_ES", "es" },
      { GST_GLSL_PROFILE_CORE, "GST_GLSL_PROFILE_CORE", "core" },
      { GST_GLSL_PROFILE_COMPATIBILITY, "GST_GLSL_PROFILE_COMPATIBILITY", "compatibility" },
      { GST_GLSL_PROFILE_ANY, "GST_GLSL_PROFILE_ANY", "any" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstGLSLProfile", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglupload.h" */
GType
gst_gl_upload_return_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_UPLOAD_DONE, "GST_GL_UPLOAD_DONE", "done" },
      { GST_GL_UPLOAD_ERROR, "GST_GL_UPLOAD_ERROR", "error" },
      { GST_GL_UPLOAD_UNSUPPORTED, "GST_GL_UPLOAD_UNSUPPORTED", "unsupported" },
      { GST_GL_UPLOAD_RECONFIGURE, "GST_GL_UPLOAD_RECONFIGURE", "reconfigure" },
      { GST_GL_UPLOAD_UNSHARED_GL_CONTEXT, "GST_GL_UPLOAD_UNSHARED_GL_CONTEXT", "unshared-gl-context" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLUploadReturn", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglapi.h" */
GType
gst_gl_api_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_GL_API_NONE, "GST_GL_API_NONE", "none" },
      { GST_GL_API_OPENGL, "GST_GL_API_OPENGL", "opengl" },
      { GST_GL_API_OPENGL3, "GST_GL_API_OPENGL3", "opengl3" },
      { GST_GL_API_GLES1, "GST_GL_API_GLES1", "gles1" },
      { GST_GL_API_GLES2, "GST_GL_API_GLES2", "gles2" },
      { GST_GL_API_ANY, "GST_GL_API_ANY", "any" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstGLAPI", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_gl_platform_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_GL_PLATFORM_NONE, "GST_GL_PLATFORM_NONE", "none" },
      { GST_GL_PLATFORM_EGL, "GST_GL_PLATFORM_EGL", "egl" },
      { GST_GL_PLATFORM_GLX, "GST_GL_PLATFORM_GLX", "glx" },
      { GST_GL_PLATFORM_WGL, "GST_GL_PLATFORM_WGL", "wgl" },
      { GST_GL_PLATFORM_CGL, "GST_GL_PLATFORM_CGL", "cgl" },
      { GST_GL_PLATFORM_EAGL, "GST_GL_PLATFORM_EAGL", "eagl" },
      { GST_GL_PLATFORM_ANY, "GST_GL_PLATFORM_ANY", "any" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstGLPlatform", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglviewconvert.h" */
GType
gst_gl_stereo_downmix_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_STEREO_DOWNMIX_ANAGLYPH_GREEN_MAGENTA_DUBOIS, "GST_GL_STEREO_DOWNMIX_ANAGLYPH_GREEN_MAGENTA_DUBOIS", "green-magenta-dubois" },
      { GST_GL_STEREO_DOWNMIX_ANAGLYPH_RED_CYAN_DUBOIS, "GST_GL_STEREO_DOWNMIX_ANAGLYPH_RED_CYAN_DUBOIS", "red-cyan-dubois" },
      { GST_GL_STEREO_DOWNMIX_ANAGLYPH_AMBER_BLUE_DUBOIS, "GST_GL_STEREO_DOWNMIX_ANAGLYPH_AMBER_BLUE_DUBOIS", "amber-blue-dubois" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLStereoDownmix", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstglquery.h" */
GType
gst_gl_query_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_QUERY_NONE, "GST_GL_QUERY_NONE", "none" },
      { GST_GL_QUERY_TIME_ELAPSED, "GST_GL_QUERY_TIME_ELAPSED", "time-elapsed" },
      { GST_GL_QUERY_TIMESTAMP, "GST_GL_QUERY_TIMESTAMP", "timestamp" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLQueryType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstgl_enums.h" */
GType
gst_gl_texture_target_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_GL_TEXTURE_TARGET_NONE, "GST_GL_TEXTURE_TARGET_NONE", "none" },
      { GST_GL_TEXTURE_TARGET_2D, "GST_GL_TEXTURE_TARGET_2D", "2d" },
      { GST_GL_TEXTURE_TARGET_RECTANGLE, "GST_GL_TEXTURE_TARGET_RECTANGLE", "rectangle" },
      { GST_GL_TEXTURE_TARGET_EXTERNAL_OES, "GST_GL_TEXTURE_TARGET_EXTERNAL_OES", "external-oes" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstGLTextureTarget", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}


