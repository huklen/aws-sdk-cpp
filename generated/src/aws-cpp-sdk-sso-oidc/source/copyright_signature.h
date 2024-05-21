#pragma once

namespace SSO_OIDC {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSO_OIDC;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSO_OIDC_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SSO_OIDC