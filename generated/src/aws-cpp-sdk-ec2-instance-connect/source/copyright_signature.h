#pragma once

namespace EC2_INSTANCE_CONNECT {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_EC2_INSTANCE_CONNECT;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_EC2_INSTANCE_CONNECT_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace EC2_INSTANCE_CONNECT