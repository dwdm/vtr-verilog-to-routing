#ifndef VTR_VERSION_H
#define VTR_VERSION_H
#include <cstddef>

namespace vtr {
    extern const char* VERSION;
    extern const char* VERSION_SHORT;

    extern size_t VERSION_MAJOR;
    extern size_t VERSION_MINOR;
    extern size_t VERSION_PATCH;

    extern const char* VCS_REVISION;
    extern const char* COMPILER;
    extern const char* TIMESTAMP;
    extern const char* PRERELEASE_TAG;
}

#endif