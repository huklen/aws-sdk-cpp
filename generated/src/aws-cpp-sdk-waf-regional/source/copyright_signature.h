#pragma once

namespace WAF_REGIONAL {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_WAF_REGIONAL;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_WAF_REGIONAL_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace WAF_REGIONAL