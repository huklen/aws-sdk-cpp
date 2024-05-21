#pragma once

namespace SUPPLYCHAIN {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SUPPLYCHAIN;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SUPPLYCHAIN_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SUPPLYCHAIN