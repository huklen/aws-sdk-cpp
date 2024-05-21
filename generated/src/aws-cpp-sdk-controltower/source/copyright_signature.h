#pragma once

namespace CONTROLTOWER {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CONTROLTOWER;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CONTROLTOWER_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CONTROLTOWER