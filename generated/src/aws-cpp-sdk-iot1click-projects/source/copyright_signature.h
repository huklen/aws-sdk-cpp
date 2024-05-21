#pragma once

namespace IOT1CLICK_PROJECTS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_IOT1CLICK_PROJECTS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_IOT1CLICK_PROJECTS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace IOT1CLICK_PROJECTS