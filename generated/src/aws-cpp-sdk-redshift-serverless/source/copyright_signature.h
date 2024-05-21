#pragma once

namespace REDSHIFT_SERVERLESS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_REDSHIFT_SERVERLESS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_REDSHIFT_SERVERLESS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace REDSHIFT_SERVERLESS