#pragma once

namespace QLDB_SESSION {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_QLDB_SESSION;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_QLDB_SESSION_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace QLDB_SESSION