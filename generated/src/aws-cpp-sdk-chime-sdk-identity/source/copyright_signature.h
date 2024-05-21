#pragma once

namespace CHIME_SDK_IDENTITY {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CHIME_SDK_IDENTITY;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CHIME_SDK_IDENTITY_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CHIME_SDK_IDENTITY