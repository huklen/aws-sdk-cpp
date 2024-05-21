#pragma once

namespace KENDRA_RANKING {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KENDRA_RANKING;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KENDRA_RANKING_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace KENDRA_RANKING