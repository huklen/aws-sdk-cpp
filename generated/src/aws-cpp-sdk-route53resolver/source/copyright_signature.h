#pragma once

namespace ROUTE53RESOLVER {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ROUTE53RESOLVER;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ROUTE53RESOLVER_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ROUTE53RESOLVER