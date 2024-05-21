#pragma once

namespace VPC_LATTICE {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_VPC_LATTICE;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_VPC_LATTICE_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace VPC_LATTICE