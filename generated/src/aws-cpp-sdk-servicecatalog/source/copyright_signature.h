#pragma once

namespace SERVICECATALOG {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SERVICECATALOG;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_SERVICECATALOG_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace SERVICECATALOG