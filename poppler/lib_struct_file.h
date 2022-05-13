#ifndef _LIB_STRUCT_FILE_H
#define _LIB_STRUCT_FILE_H
#include "JPEG2000Stream.h"

#define sandbox_fields_reflection_openjpeg_class_JPXStreamPrivate(f, g, ...)         \
     f(opj_image_t *, status_array, FIELD_NORMAL, ##__VA_ARGS__) g() \
     
