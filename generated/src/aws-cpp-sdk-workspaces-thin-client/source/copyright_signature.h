#pragma once

namespace WORKSPACES_THIN_CLIENT {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_WORKSPACES_THIN_CLIENT;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_WORKSPACES_THIN_CLIENT_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace WORKSPACES_THIN_CLIENT