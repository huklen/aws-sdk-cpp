#pragma once

namespace CODEGURU_SECURITY {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODEGURU_SECURITY;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODEGURU_SECURITY_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CODEGURU_SECURITY