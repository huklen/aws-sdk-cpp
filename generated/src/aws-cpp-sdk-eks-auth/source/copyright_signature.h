#pragma once

namespace EKS_AUTH {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_EKS_AUTH;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_EKS_AUTH_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace EKS_AUTH