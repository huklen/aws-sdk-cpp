#pragma once

namespace SSM_CONTACTS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSM_CONTACTS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SSM_CONTACTS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SSM_CONTACTS