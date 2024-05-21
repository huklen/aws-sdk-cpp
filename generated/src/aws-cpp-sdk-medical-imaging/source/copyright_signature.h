#pragma once

namespace MEDICAL_IMAGING {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MEDICAL_IMAGING;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MEDICAL_IMAGING_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace MEDICAL_IMAGING