#pragma once

namespace SERVICE_QUOTAS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SERVICE_QUOTAS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SERVICE_QUOTAS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SERVICE_QUOTAS