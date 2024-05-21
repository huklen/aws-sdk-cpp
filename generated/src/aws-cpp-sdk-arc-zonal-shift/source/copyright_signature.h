#pragma once

namespace ARC_ZONAL_SHIFT {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ARC_ZONAL_SHIFT;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ARC_ZONAL_SHIFT_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ARC_ZONAL_SHIFT