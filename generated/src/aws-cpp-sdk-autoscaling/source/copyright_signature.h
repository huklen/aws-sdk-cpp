#pragma once

namespace AUTOSCALING {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_AUTOSCALING;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_AUTOSCALING_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace AUTOSCALING