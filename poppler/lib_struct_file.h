#ifndef _LIB_STRUCT_FILE_H
#define _LIB_STRUCT_FILE_H
#include "JPEG2000Stream.h"

#define sandbox_fields_reflection_openjpeg_class_JPXStreamPrivate(f, g, ...)         \
     f(opj_image_t *, image, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, counter, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, ccounter, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, npixels, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, ncomps, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(bool, inited, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, smaskInData, FIELD_NORMAL, ##__VA_ARGS__) g() \
     // add void later

#define sandbox_fields_reflection_openjpeg_class_opj_image(f, g, ...)  \
     f(OPJ_UINT32, x0, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, y0, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, x1, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, y1, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, numcomps, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_COLOR_SPACE, color_space, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_BYTE *, icc_profile_buf, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(opj_image_comp_t *, comps, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, icc_profile_len, FIELD_NORMAL, ##__VA_ARGS__) g() \
     
#define sandbox_fields_reflection_openjpeg_class_opj_image_comp(f, g, ...)  \
     f(OPJ_UINT32, dx, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, dy, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, w, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, h, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, x0, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, y0, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, prec, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, bpp, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, sgnd, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, resno_decoded, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, factor, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32 *, data, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT16, alpha, FIELD_NORMAL, ##__VA_ARGS__) g() \

//  opj_stream_t is a void*

// Gonna need JPXData struct

#define sandbox_fields_reflection_openjpeg_JPXData_s(f, g, ...)  \
     f(const unsigned char *, data, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, size, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_OFF_T, pos, FIELD_NORMAL, ##__VA_ARGS__) g() \

// jpxRead_callback is a OPJ_SIZE_T
// jpxSkip_callback is a OPJ_OFF_T
// jpxSeek_callback is a OPJ_BOOL
// length is a size

// Gonna need opj_dparameters struct
// Potential issue with infile and outfile as it may specify length
#define sandbox_fields_reflection_openjpeg_class_opj_dparameters(f, g, ...)  \
     f(OPJ_UINT32, cp_reduce, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, cp_layer, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(unsigned int, flags, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(char, infile, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(char, outfile, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, decod_format, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, cod_format, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, DA_x0, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, DA_x1, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, DA_y0, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, DA_y1, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_BOOL, m_verbose, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, tile_index, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_UINT32, nb_tile_to_decode, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(OPJ_BOOL, jpwl_correct, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, jpwl_exp_comps, FIELD_NORMAL, ##__VA_ARGS__) g() \
     f(int, jpwl_max_tiles, FIELD_NORMAL, ##__VA_ARGS__) g() \

// MAY NEED TO CHANGE CLASS TO JPX OR SOME SHIT FOR THOSE STRUCTS, OR DIF FILE OR SOMETHING
#define sandbox_fields_reflection_openjpeg_allClasses(f, ...) \
     f(JPXStreamPrivate, openjpeg, ##__VA_ARGS__)   \
     f(opj_image, openjpeg, ##__VA_ARGS__)   \
     f(opj_image_comp, openjpeg, ##__VA_ARGS__)   \
     f(JPXData_s, openjpeg, ##__VA_ARGS__)   \
     f(opj_dparameters, openjpeg, ##__VA_ARGS__)   \

// format is a OPJ_CODEC_FORMAT

// decoder is a opj_codec_t which is void *

// No fucking clue about the callbacks

// Image is just a nullptr
     
     
     
