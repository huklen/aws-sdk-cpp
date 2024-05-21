#pragma once

namespace PERSONALIZE_EVENTS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_PERSONALIZE_EVENTS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_PERSONALIZE_EVENTS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace PERSONALIZE_EVENTS