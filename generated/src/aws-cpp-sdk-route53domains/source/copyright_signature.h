#pragma once

namespace ROUTE53DOMAINS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ROUTE53DOMAINS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ROUTE53DOMAINS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ROUTE53DOMAINS