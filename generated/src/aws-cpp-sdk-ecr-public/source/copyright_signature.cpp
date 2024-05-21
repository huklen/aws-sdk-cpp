namespace ECR_PUBLIC {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

    DLL_EXPORT const char* _COPYRIGHT_NOTICE_ECR_PUBLIC = "Copyright (c) 2023 eelDev AB. All rights reserved.";
    DLL_EXPORT const char* _COPYRIGHT_NOTICE_ECR_PUBLIC_EELDEV = "Library compiled for eelDev AB by eelDev AB.";

} // namespace ECR_PUBLIC