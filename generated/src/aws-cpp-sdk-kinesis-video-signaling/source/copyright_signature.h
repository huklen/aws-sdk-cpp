#pragma once

namespace KINESIS_VIDEO_SIGNALING {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KINESIS_VIDEO_SIGNALING;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KINESIS_VIDEO_SIGNALING_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace KINESIS_VIDEO_SIGNALING