#pragma once

namespace IOT_JOBS_DATA {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_IOT_JOBS_DATA;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_IOT_JOBS_DATA_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace IOT_JOBS_DATA