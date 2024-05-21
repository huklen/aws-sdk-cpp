#pragma once

namespace EMR_CONTAINERS {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_EMR_CONTAINERS;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_EMR_CONTAINERS_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace EMR_CONTAINERS