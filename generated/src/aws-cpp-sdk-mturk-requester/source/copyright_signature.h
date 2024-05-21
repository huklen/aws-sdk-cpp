#pragma once

namespace MTURK_REQUESTER {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MTURK_REQUESTER;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MTURK_REQUESTER_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace MTURK_REQUESTER