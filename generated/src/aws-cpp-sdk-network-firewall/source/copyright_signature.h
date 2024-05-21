#pragma once

namespace NETWORK_FIREWALL {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_NETWORK_FIREWALL;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_NETWORK_FIREWALL_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace NETWORK_FIREWALL