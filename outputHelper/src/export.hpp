#ifndef __SOH_EXPORT_H
#define __SOH_EXPORT_H

#ifdef _WIN32
    #ifdef SOH_BUILD
        #define SOHAPI __declspec(dllexport)
    #else
        #define SOHAPI __declspec(dllimport)
    #endif
#elif defined(__GNUC__) || defined(__clang__)
    #define SOHAPI __attribute__((visibility("default")))
#else
    #define SOHAPI
#endif

#endif
