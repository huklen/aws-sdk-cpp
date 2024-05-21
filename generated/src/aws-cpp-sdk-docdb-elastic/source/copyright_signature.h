#pragma once

namespace DOCDB_ELASTIC {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DOCDB_ELASTIC;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_DOCDB_ELASTIC_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace DOCDB_ELASTIC