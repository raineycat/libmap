#ifndef LIBMAP_H
#define LIBMAP_H

#include <stdbool.h>

#include "platform.h"

#ifndef LIBMAP_API
    #ifdef libmap_EXPORTS
        #define LIBMAP_API EXPORT
    #else
        #define LIBMAP_API IMPORT
    #endif
#endif

#endif
