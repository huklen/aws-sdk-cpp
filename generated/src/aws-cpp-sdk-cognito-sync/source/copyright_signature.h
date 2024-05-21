#pragma once

namespace COGNITO_SYNC {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COGNITO_SYNC;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COGNITO_SYNC_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace COGNITO_SYNC