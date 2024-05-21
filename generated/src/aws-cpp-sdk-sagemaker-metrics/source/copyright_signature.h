#pragma once

namespace SAGEMAKER_METRICS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SAGEMAKER_METRICS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SAGEMAKER_METRICS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SAGEMAKER_METRICS