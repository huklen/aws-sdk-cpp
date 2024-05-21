#pragma once

namespace SSM_SAP {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSM_SAP;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSM_SAP_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SSM_SAP