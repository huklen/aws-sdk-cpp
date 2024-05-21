#pragma once

namespace BACKUP_GATEWAY {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_BACKUP_GATEWAY;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_BACKUP_GATEWAY_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace BACKUP_GATEWAY