#pragma once

namespace LEXV2_MODELS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LEXV2_MODELS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_LEXV2_MODELS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace LEXV2_MODELS