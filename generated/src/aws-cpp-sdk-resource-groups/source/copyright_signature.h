#pragma once

namespace RESOURCE_GROUPS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_RESOURCE_GROUPS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_RESOURCE_GROUPS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace RESOURCE_GROUPS