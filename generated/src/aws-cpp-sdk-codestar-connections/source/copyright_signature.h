#pragma once

namespace CODESTAR_CONNECTIONS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODESTAR_CONNECTIONS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODESTAR_CONNECTIONS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CODESTAR_CONNECTIONS