/* Generated by :claw at 2021-01-10T11:17:35.891185Z */

#include <stddef.h>
#if defined(__cplusplus)
#include <new>
#endif



#include "SDL.h"
#include "SDL_syswm.h"


#if !defined(__CLAW_API)
#  if defined(_WIN32)
#    define __CLAW_API __declspec(dllexport)
#  elif defined(__GNUC__)
#    define __CLAW_API __attribute__((visibility("default")))
#  else
#    define __CLAW_API
#  endif
#endif

#ifdef _WIN32
#  include <windows.h>
static HMODULE ___claw_module;

static int ___claw_init_wrapper() {
  ___claw_module = GetModuleHandle(NULL);
  return ___claw_module != NULL;
}

static void ___claw_close_wrapper(void) {
}
#else
#  include <dlfcn.h>
static void* ___claw_module;

static int ___claw_init_wrapper() {
  ___claw_module = dlopen(NULL, RTLD_NOW | RTLD_GLOBAL);
  return ___claw_module != NULL;
}

static void ___claw_close_wrapper(void) {
}
#endif

static void* claw_get_proc_addr(const char *name) {
  if(___claw_module == NULL) {
    return NULL;
  }

#ifdef _WIN32
  return (void*) GetProcAddress(___claw_module, name);
#else
  return dlsym(___claw_module, name);
#endif
}

#if defined(__cplusplus)
extern "C" {
#endif

typedef SDL_GameControllerButtonBind (*SDL_GameControllerGetBindForAxis_t)(SDL_GameController*,SDL_GameControllerAxis);
typedef void (*SDL_JoystickGetGUIDString_t)(SDL_JoystickGUID,char*,int);
typedef void (*SDL_LogMessageV_t)(int,SDL_LogPriority,const char*,va_list);
typedef SDL_GameControllerButtonBind (*SDL_GameControllerGetBindForButton_t)(SDL_GameController*,SDL_GameControllerButton);
typedef char* (*SDL_GameControllerMappingForGUID_t)(SDL_JoystickGUID);
typedef SDL_JoystickGUID (*SDL_JoystickGetGUIDFromString_t)(const char*);
typedef SDL_JoystickGUID (*SDL_JoystickGetDeviceGUID_t)(int);
typedef int (*SDL_vsscanf_t)(const char*,const char*,va_list);
typedef int (*SDL_vsnprintf_t)(char*,size_t,const char*,va_list);
typedef SDL_JoystickGUID (*SDL_JoystickGetGUID_t)(SDL_Joystick*);

static SDL_GameControllerGetBindForAxis_t __v_claw_SDL_GameControllerGetBindForAxis;
static SDL_JoystickGetGUIDString_t __v_claw_SDL_JoystickGetGUIDString;
static SDL_LogMessageV_t __v_claw_SDL_LogMessageV;
static SDL_GameControllerGetBindForButton_t __v_claw_SDL_GameControllerGetBindForButton;
static SDL_GameControllerMappingForGUID_t __v_claw_SDL_GameControllerMappingForGUID;
static SDL_JoystickGetGUIDFromString_t __v_claw_SDL_JoystickGetGUIDFromString;
static SDL_JoystickGetDeviceGUID_t __v_claw_SDL_JoystickGetDeviceGUID;
static SDL_vsscanf_t __v_claw_SDL_vsscanf;
static SDL_vsnprintf_t __v_claw_SDL_vsnprintf;
static SDL_JoystickGetGUID_t __v_claw_SDL_JoystickGetGUID;

__CLAW_API int __claw_claw_sdl_wrapper_loader_D77A52BD95F3BA6146BD0B16791B38379() {
  if(___claw_init_wrapper()) {

__v_claw_SDL_GameControllerGetBindForAxis = (SDL_GameControllerGetBindForAxis_t) claw_get_proc_addr("SDL_GameControllerGetBindForAxis");
__v_claw_SDL_JoystickGetGUIDString = (SDL_JoystickGetGUIDString_t) claw_get_proc_addr("SDL_JoystickGetGUIDString");
__v_claw_SDL_LogMessageV = (SDL_LogMessageV_t) claw_get_proc_addr("SDL_LogMessageV");
__v_claw_SDL_GameControllerGetBindForButton = (SDL_GameControllerGetBindForButton_t) claw_get_proc_addr("SDL_GameControllerGetBindForButton");
__v_claw_SDL_GameControllerMappingForGUID = (SDL_GameControllerMappingForGUID_t) claw_get_proc_addr("SDL_GameControllerMappingForGUID");
__v_claw_SDL_JoystickGetGUIDFromString = (SDL_JoystickGetGUIDFromString_t) claw_get_proc_addr("SDL_JoystickGetGUIDFromString");
__v_claw_SDL_JoystickGetDeviceGUID = (SDL_JoystickGetDeviceGUID_t) claw_get_proc_addr("SDL_JoystickGetDeviceGUID");
__v_claw_SDL_vsscanf = (SDL_vsscanf_t) claw_get_proc_addr("SDL_vsscanf");
__v_claw_SDL_vsnprintf = (SDL_vsnprintf_t) claw_get_proc_addr("SDL_vsnprintf");
__v_claw_SDL_JoystickGetGUID = (SDL_JoystickGetGUID_t) claw_get_proc_addr("SDL_JoystickGetGUID");

    ___claw_close_wrapper();
    return 0;
  }
  return 1;
}


__CLAW_API SDL_GameControllerButtonBind* __claw_SDL_GameControllerGetBindForAxis(SDL_GameControllerButtonBind* __claw_result, SDL_GameController* gamecontroller, SDL_GameControllerAxis axis) {

}

__CLAW_API void __claw_SDL_JoystickGetGUIDString(SDL_JoystickGUID* guid, char* pszGUID, int cbGUID) {

}

__CLAW_API void __claw_SDL_LogMessageV(int category, SDL_LogPriority priority, const char* fmt, va_list* ap) {

}

__CLAW_API SDL_GameControllerButtonBind* __claw_SDL_GameControllerGetBindForButton(SDL_GameControllerButtonBind* __claw_result, SDL_GameController* gamecontroller, SDL_GameControllerButton button) {

}

__CLAW_API char* __claw_SDL_GameControllerMappingForGUID(SDL_JoystickGUID* guid) {

}

__CLAW_API SDL_JoystickGUID* __claw_SDL_JoystickGetGUIDFromString(SDL_JoystickGUID* __claw_result, const char* pchGUID) {

}

__CLAW_API SDL_JoystickGUID* __claw_SDL_JoystickGetDeviceGUID(SDL_JoystickGUID* __claw_result, int device_index) {

}

__CLAW_API int __claw_SDL_vsscanf(const char* text, const char* fmt, va_list* ap) {

}

__CLAW_API int __claw_SDL_vsnprintf(char* text, size_t maxlen, const char* fmt, va_list* ap) {

}

__CLAW_API SDL_JoystickGUID* __claw_SDL_JoystickGetGUID(SDL_JoystickGUID* __claw_result, SDL_Joystick* joystick) {

}

#if defined(__cplusplus)
}
#endif