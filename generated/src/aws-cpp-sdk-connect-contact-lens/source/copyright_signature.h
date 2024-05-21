#pragma once

namespace CONNECT_CONTACT_LENS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CONNECT_CONTACT_LENS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_CONNECT_CONTACT_LENS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace CONNECT_CONTACT_LENS