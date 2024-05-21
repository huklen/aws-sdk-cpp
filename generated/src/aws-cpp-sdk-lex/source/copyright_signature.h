#pragma once

namespace LEX {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LEX;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LEX_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace LEX