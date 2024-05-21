#pragma once

namespace FINSPACE_DATA {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_FINSPACE_DATA;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_FINSPACE_DATA_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace FINSPACE_DATA