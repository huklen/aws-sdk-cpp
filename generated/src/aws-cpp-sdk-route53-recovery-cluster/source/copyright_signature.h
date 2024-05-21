#pragma once

namespace ROUTE53_RECOVERY_CLUSTER {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ROUTE53_RECOVERY_CLUSTER;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ROUTE53_RECOVERY_CLUSTER_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ROUTE53_RECOVERY_CLUSTER