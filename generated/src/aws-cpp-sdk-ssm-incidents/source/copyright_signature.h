#pragma once

namespace SSM_INCIDENTS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSM_INCIDENTS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSM_INCIDENTS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SSM_INCIDENTS