%module LibMapBinding

%include <typemaps.i>

%{
#define LIBMAP_API
#include "map_parser.h"
#include "geo_generator.h"
%}

#define LIBMAP_API

// %include "include/libmap/face.h"
// %include "include/libmap/brush.h"
// %include "include/libmap/entity.h"
// 
%include "include/libmap/map_parser.h"
%include "include/libmap/geo_generator.h"
