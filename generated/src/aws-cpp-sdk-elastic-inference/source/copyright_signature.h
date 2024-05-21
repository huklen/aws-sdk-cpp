#pragma once

namespace ELASTIC_INFERENCE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ELASTIC_INFERENCE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_ELASTIC_INFERENCE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace ELASTIC_INFERENCE