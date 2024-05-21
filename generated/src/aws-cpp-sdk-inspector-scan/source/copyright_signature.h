#pragma once

namespace INSPECTOR_SCAN {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_INSPECTOR_SCAN;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_INSPECTOR_SCAN_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace INSPECTOR_SCAN