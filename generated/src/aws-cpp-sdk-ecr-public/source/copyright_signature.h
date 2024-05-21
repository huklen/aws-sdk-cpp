#pragma once

namespace ECR_PUBLIC {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ECR_PUBLIC;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ECR_PUBLIC_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ECR_PUBLIC