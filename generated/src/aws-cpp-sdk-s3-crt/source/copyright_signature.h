#pragma once

namespace S3_CRT {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_S3_CRT;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_S3_CRT_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace S3_CRT