#pragma once

namespace MEDIAPACKAGE_VOD {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MEDIAPACKAGE_VOD;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MEDIAPACKAGE_VOD_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace MEDIAPACKAGE_VOD