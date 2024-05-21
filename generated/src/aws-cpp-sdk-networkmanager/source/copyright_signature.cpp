namespace NETWORKMANAGER {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

    DLL_EXPORT const char* _COPYRIGHT_NOTICE_NETWORKMANAGER = "Copyright (c) 2023 eelDev AB. All rights reserved.";
    DLL_EXPORT const char* _COPYRIGHT_NOTICE_NETWORKMANAGER_EELDEV = "Library compiled for eelDev AB by eelDev AB.";

} // namespace NETWORKMANAGER