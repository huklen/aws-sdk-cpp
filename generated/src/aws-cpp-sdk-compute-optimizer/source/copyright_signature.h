#pragma once

namespace COMPUTE_OPTIMIZER {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COMPUTE_OPTIMIZER;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COMPUTE_OPTIMIZER_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace COMPUTE_OPTIMIZER