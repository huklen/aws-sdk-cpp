#pragma once

namespace MANAGEDBLOCKCHAIN_QUERY {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MANAGEDBLOCKCHAIN_QUERY;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MANAGEDBLOCKCHAIN_QUERY_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace MANAGEDBLOCKCHAIN_QUERY