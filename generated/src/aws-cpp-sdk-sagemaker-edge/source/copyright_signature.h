#pragma once

namespace SAGEMAKER_EDGE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SAGEMAKER_EDGE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SAGEMAKER_EDGE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SAGEMAKER_EDGE