#pragma once

namespace LAUNCH_WIZARD {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LAUNCH_WIZARD;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LAUNCH_WIZARD_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace LAUNCH_WIZARD