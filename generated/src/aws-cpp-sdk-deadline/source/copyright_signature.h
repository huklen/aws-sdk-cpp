#pragma once

namespace DEADLINE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DEADLINE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DEADLINE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace DEADLINE