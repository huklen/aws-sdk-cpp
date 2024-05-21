#pragma once

namespace MARKETPLACE_CATALOG {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MARKETPLACE_CATALOG;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MARKETPLACE_CATALOG_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace MARKETPLACE_CATALOG