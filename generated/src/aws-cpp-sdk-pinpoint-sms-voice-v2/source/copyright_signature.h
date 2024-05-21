#pragma once

namespace PINPOINT_SMS_VOICE_V2 {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_PINPOINT_SMS_VOICE_V2;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_PINPOINT_SMS_VOICE_V2_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace PINPOINT_SMS_VOICE_V2