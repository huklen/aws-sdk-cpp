namespace DEVOPS_GURU {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

    DLL_EXPORT const char* _COPYRIGHT_NOTICE_DEVOPS_GURU = "Copyright (c) 2023 eelDev AB. All rights reserved.";
    DLL_EXPORT const char* _COPYRIGHT_NOTICE_DEVOPS_GURU_EELDEV = "Library compiled for eelDev AB by eelDev AB.";

} // namespace DEVOPS_GURU