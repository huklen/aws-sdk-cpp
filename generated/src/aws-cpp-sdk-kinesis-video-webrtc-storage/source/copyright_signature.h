#pragma once

namespace KINESIS_VIDEO_WEBRTC_STORAGE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KINESIS_VIDEO_WEBRTC_STORAGE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KINESIS_VIDEO_WEBRTC_STORAGE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace KINESIS_VIDEO_WEBRTC_STORAGE