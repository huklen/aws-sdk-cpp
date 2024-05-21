#pragma once

namespace PAYMENT_CRYPTOGRAPHY {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_PAYMENT_CRYPTOGRAPHY;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_PAYMENT_CRYPTOGRAPHY_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace PAYMENT_CRYPTOGRAPHY