#pragma once

namespace DATASYNC {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DATASYNC;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DATASYNC_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace DATASYNC