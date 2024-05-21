#pragma once

namespace NEPTUNE_GRAPH {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_NEPTUNE_GRAPH;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_NEPTUNE_GRAPH_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace NEPTUNE_GRAPH