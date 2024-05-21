#pragma once

namespace CUSTOMER_PROFILES {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CUSTOMER_PROFILES;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CUSTOMER_PROFILES_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CUSTOMER_PROFILES