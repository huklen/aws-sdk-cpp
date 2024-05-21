#pragma once

namespace S3CONTROL {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_S3CONTROL;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_S3CONTROL_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace S3CONTROL