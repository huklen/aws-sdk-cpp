#pragma once

namespace CLOUDFRONT_KEYVALUESTORE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CLOUDFRONT_KEYVALUESTORE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CLOUDFRONT_KEYVALUESTORE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CLOUDFRONT_KEYVALUESTORE