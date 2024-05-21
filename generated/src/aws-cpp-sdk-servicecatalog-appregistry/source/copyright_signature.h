#pragma once

namespace SERVICECATALOG_APPREGISTRY {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SERVICECATALOG_APPREGISTRY;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SERVICECATALOG_APPREGISTRY_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SERVICECATALOG_APPREGISTRY