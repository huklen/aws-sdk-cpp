#pragma once

namespace CLOUDSEARCHDOMAIN {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CLOUDSEARCHDOMAIN;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CLOUDSEARCHDOMAIN_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CLOUDSEARCHDOMAIN