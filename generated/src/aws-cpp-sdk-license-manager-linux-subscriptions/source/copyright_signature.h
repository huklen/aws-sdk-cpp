#pragma once

namespace LICENSE_MANAGER_LINUX_SUBSCRIPTIONS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LICENSE_MANAGER_LINUX_SUBSCRIPTIONS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LICENSE_MANAGER_LINUX_SUBSCRIPTIONS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace LICENSE_MANAGER_LINUX_SUBSCRIPTIONS