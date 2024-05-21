#pragma once

namespace QUICKSIGHT {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_QUICKSIGHT;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_QUICKSIGHT_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace QUICKSIGHT