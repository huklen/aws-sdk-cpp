#pragma once

namespace REDSHIFT_DATA {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_REDSHIFT_DATA;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_REDSHIFT_DATA_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace REDSHIFT_DATA