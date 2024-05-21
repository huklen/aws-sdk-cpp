#pragma once

namespace MIGRATION_HUB_REFACTOR_SPACES {

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MIGRATION_HUB_REFACTOR_SPACES;
    DLL_EXPORT extern const char* _COPYRIGHT_NOTICE_MIGRATION_HUB_REFACTOR_SPACES_EELDEV;

#ifdef __cplusplus
}
#endif

} // namespace MIGRATION_HUB_REFACTOR_SPACES