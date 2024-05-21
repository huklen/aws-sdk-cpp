#pragma once

namespace ACM_PCA_EELDEV {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ACM_PCA;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ACM_PCA_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ACM_PCA_EELDEV