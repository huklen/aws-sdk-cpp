#pragma once

namespace CODECATALYST {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODECATALYST;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CODECATALYST_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CODECATALYST