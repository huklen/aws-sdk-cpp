#pragma once

namespace B2BI {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_B2BI;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_B2BI_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace B2BI