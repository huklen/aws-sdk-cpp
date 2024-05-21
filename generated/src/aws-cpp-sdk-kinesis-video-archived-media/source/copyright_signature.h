#pragma once

namespace KINESIS_VIDEO_ARCHIVED_MEDIA {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KINESIS_VIDEO_ARCHIVED_MEDIA;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_KINESIS_VIDEO_ARCHIVED_MEDIA_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace KINESIS_VIDEO_ARCHIVED_MEDIA