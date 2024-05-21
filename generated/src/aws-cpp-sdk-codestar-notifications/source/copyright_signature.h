#pragma once

namespace CODESTAR_NOTIFICATIONS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODESTAR_NOTIFICATIONS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODESTAR_NOTIFICATIONS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CODESTAR_NOTIFICATIONS