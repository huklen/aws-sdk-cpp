#pragma once

namespace S3_ENCRYPTION {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_S3_ENCRYPTION;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_S3_ENCRYPTION_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace S3_ENCRYPTION