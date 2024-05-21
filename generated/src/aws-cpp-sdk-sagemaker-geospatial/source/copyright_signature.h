#pragma once

namespace SAGEMAKER_GEOSPATIAL {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SAGEMAKER_GEOSPATIAL;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SAGEMAKER_GEOSPATIAL_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SAGEMAKER_GEOSPATIAL