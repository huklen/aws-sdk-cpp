#pragma once

namespace COST_OPTIMIZATION_HUB {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COST_OPTIMIZATION_HUB;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_COST_OPTIMIZATION_HUB_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace COST_OPTIMIZATION_HUB