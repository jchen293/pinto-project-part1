
#include <inttypes.h>

// #define f 2 ^ 14
typedef int floating_point;
// struct floating_point
// {
//     int integer;
//     int fractional;
// };

floating_point Convert_to_fixed_point(int n);

int Convert_to_integer(floating_point x);

floating_point add_x_y(floating_point x, floating_point y);

floating_point add_x_n(floating_point x, int n);
floating_point sub_x_y(floating_point x, floating_point y);

floating_point sub_x_n(floating_point x, int n);

floating_point mult_x_n(floating_point x, int n);

floating_point mult_x_y(floating_point x, floating_point y);

floating_point div_x_n(floating_point x, int n);

floating_point div_x_y(floating_point x, floating_point y);
