#pragma once

namespace COGNITO_IDP {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COGNITO_IDP;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COGNITO_IDP_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace COGNITO_IDP