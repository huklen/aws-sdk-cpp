#pragma once

namespace DEVOPS_GURU {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DEVOPS_GURU;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DEVOPS_GURU_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace DEVOPS_GURU