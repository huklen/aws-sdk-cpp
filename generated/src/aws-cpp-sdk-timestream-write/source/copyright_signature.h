#pragma once

namespace TIMESTREAM_WRITE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_TIMESTREAM_WRITE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_TIMESTREAM_WRITE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace TIMESTREAM_WRITE