
#include <inttypes.h>

// #define f 2 ^ 14
typedef int floating_point;
// struct floating_point
// {
//     int integer;
//     int fractional;
// };
// #define FP_SUB(A,B) (A - B)
#define CONVERT_TO_FIXED_POINT(N) ((N) << 14)

#define CONVERT_TO_INTEGER(X) ((X) >> 14)

#define ROUND_DOWN(X) ((X) >= 0 ? (((X) + 8192) >> 14) : (((X)-8192) >> 14))

#define FLOATING_POINT_ADD(X, Y) ((X) + (Y))

#define FLOATING_POINT_ADD_N(X, N) ((X) + ((N) << 14))

#define FLOATING_POINT_SUB(X, Y) ((X) - (Y))

#define FLOATING_POINT_SUB_N(X, N) ((X) - ((N) << 14))

#define FLOATING_POINT_MULT_N(X, N) ((X) * (N))

#define FLOATING_POINT_MULT(X, Y) (((int64_t)X) * (Y) >> 14)

#define FLOATING_POINT_DIV_N(X, N) ((X) / (N))

#define FLOATING_POINT_DIV(X, Y) (((int64_t)X) << 14 / (Y))

floating_point Convert_to_fixed_point(int n);

int Convert_to_integer(floating_point x);

floating_point round_down(floating_point);

floating_point add_x_y(floating_point x, floating_point y);

floating_point add_x_n(floating_point x, int n);
floating_point sub_x_y(floating_point x, floating_point y);

floating_point sub_x_n(floating_point x, int n);

floating_point mult_x_n(floating_point x, int n);

floating_point mult_x_y(floating_point x, floating_point y);

floating_point div_x_n(floating_point x, int n);

floating_point div_x_y(floating_point x, floating_point y);
