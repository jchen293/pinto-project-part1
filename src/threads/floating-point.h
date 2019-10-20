#ifndef FLOATING_POINT_H
#define FLOATING_POINT_H
#include <inttypes.h>

typedef int floating_point;

#define CONVERT_TO_FIXED_POINT(N) ((N) << 14)

#define CONVERT_TO_INTEGER(X) ((X) >> 14)

#define ROUND_DOWN(X) ((X) >= 0 ? (((X) + 8192) >> 14) : (((X)-8192) >> 14))

#define FLOATING_POINT_ADD(X, Y) ((X) + (Y))

#define FLOATING_POINT_ADD_N(X, N) ((X) + ((N) << 14))

#define FLOATING_POINT_SUB(X, Y) ((X) - (Y))

#define FLOATING_POINT_SUB_N(X, N) ((X) - ((N) << 14))

#define FLOATING_POINT_MULT_N(X, N) ((X) * (N))

#define FLOATING_POINT_MULT(X, Y) ((((int64_t)X) * (Y)) >> 14)

#define FLOATING_POINT_DIV_N(X, N) ((X) / (N))

#define FLOATING_POINT_DIV(X, Y) ((((int64_t)X) << 14) / (Y))

#endif
