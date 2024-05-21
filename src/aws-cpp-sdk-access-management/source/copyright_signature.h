#pragma once

namespace ACCESS_MANAGEMENT {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ACCESS_MANAGEMENT;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ACCESS_MANAGEMENT_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ACCESS_MANAGEMENT