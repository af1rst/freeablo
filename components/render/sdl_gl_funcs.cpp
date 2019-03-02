// Autogenerated by: https://gist.github.com/wheybags/fe2fc44e309f1942fb3e0f34e01adf5f

#include "sdl_gl_funcs.h"

PFNGLGENBUFFERSPROC glGenBuffers;
PFNGLBINDBUFFERPROC glBindBuffer;
PFNGLBUFFERDATAPROC glBufferData;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
PFNGLCREATESHADERPROC glCreateShader;
PFNGLCOMPILESHADERPROC glCompileShader;
PFNGLSHADERSOURCEPROC glShaderSource;
PFNGLCREATEPROGRAMPROC glCreateProgram;
PFNGLATTACHSHADERPROC glAttachShader;
PFNGLLINKPROGRAMPROC glLinkProgram;
PFNGLUSEPROGRAMPROC glUseProgram;
PFNGLGETSHADERIVPROC glGetShaderiv;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
PFNGLDELETESHADERPROC glDeleteShader;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
PFNGLUNIFORM1FPROC glUniform1f;
PFNGLUNIFORM2FPROC glUniform2f;
PFNGLUNIFORM3FPROC glUniform3f;
PFNGLUNIFORM4FPROC glUniform4f;
PFNGLGETPROGRAMIVPROC glGetProgramiv;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
PFNGLDETACHSHADERPROC glDetachShader;
PFNGLDELETEPROGRAMPROC glDeleteProgram;
PFNGLDELETEBUFFERSPROC glDeleteBuffers;
PFNGLUNIFORM1IPROC glUniform1i;
PFNGLUNIFORM1IVPROC glUniform1iv;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
PFNGLMAPBUFFERPROC glMapBuffer;
PFNGLUNMAPBUFFERPROC glUnmapBuffer;
PFNGLBLENDEQUATIONPROC glBlendEquation;
PFNGLACTIVETEXTUREPROC glActiveTexture;
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
PFNGLTEXIMAGE3DPROC glTexImage3D;
PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;

void initGlFuncs()
{
    void* tmp;

    tmp = SDL_GL_GetProcAddress("glGenBuffers");
    memcpy(&glGenBuffers, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glBindBuffer");
    memcpy(&glBindBuffer, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glBufferData");
    memcpy(&glBufferData, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGenVertexArrays");
    memcpy(&glGenVertexArrays, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glBindVertexArray");
    memcpy(&glBindVertexArray, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glEnableVertexAttribArray");
    memcpy(&glEnableVertexAttribArray, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glVertexAttribPointer");
    memcpy(&glVertexAttribPointer, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glCreateShader");
    memcpy(&glCreateShader, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glCompileShader");
    memcpy(&glCompileShader, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glShaderSource");
    memcpy(&glShaderSource, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glCreateProgram");
    memcpy(&glCreateProgram, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glAttachShader");
    memcpy(&glAttachShader, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glLinkProgram");
    memcpy(&glLinkProgram, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUseProgram");
    memcpy(&glUseProgram, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGetShaderiv");
    memcpy(&glGetShaderiv, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGetShaderInfoLog");
    memcpy(&glGetShaderInfoLog, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glDeleteShader");
    memcpy(&glDeleteShader, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGetUniformLocation");
    memcpy(&glGetUniformLocation, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniform1f");
    memcpy(&glUniform1f, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniform2f");
    memcpy(&glUniform2f, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniform3f");
    memcpy(&glUniform3f, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniform4f");
    memcpy(&glUniform4f, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGetProgramiv");
    memcpy(&glGetProgramiv, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGetAttribLocation");
    memcpy(&glGetAttribLocation, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glDetachShader");
    memcpy(&glDetachShader, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glDeleteProgram");
    memcpy(&glDeleteProgram, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glDeleteBuffers");
    memcpy(&glDeleteBuffers, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniform1i");
    memcpy(&glUniform1i, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniform1iv");
    memcpy(&glUniform1iv, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUniformMatrix4fv");
    memcpy(&glUniformMatrix4fv, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glMapBuffer");
    memcpy(&glMapBuffer, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glUnmapBuffer");
    memcpy(&glUnmapBuffer, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glBlendEquation");
    memcpy(&glBlendEquation, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glActiveTexture");
    memcpy(&glActiveTexture, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glDrawArraysInstanced");
    memcpy(&glDrawArraysInstanced, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glVertexAttribDivisor");
    memcpy(&glVertexAttribDivisor, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glTexImage3D");
    memcpy(&glTexImage3D, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glTexSubImage3D");
    memcpy(&glTexSubImage3D, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glGenFramebuffers");
    memcpy(&glGenFramebuffers, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glDeleteFramebuffers");
    memcpy(&glDeleteFramebuffers, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glBindFramebuffer");
    memcpy(&glBindFramebuffer, &tmp, sizeof(void*));
    tmp = SDL_GL_GetProcAddress("glFramebufferTexture");
    memcpy(&glFramebufferTexture, &tmp, sizeof(void*));
}
