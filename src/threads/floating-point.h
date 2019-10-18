
#include <inttypes.h>

#define f 2 ^ 14
typedef int floating_point;
// struct floating_point
// {
//     int integer;
//     int fractional;
// };

floating_point Convert_to_fixed_point(int n)
{
    return n * f;
}

int Convert_to_integer(floating_point x)
{
    return x / f;
}

floating_point add_x_y(floating_point x, floating_point y)
{
    return x + y;
}

floating_point add_x_n(floating_point x, int n)
{
    return x + n * f;
}
floating_point sub_x_y(floating_point x, floating_point y)
{
    return x - y;
}

floating_point sub_x_n(floating_point x, int n)
{
    return x - n * f;
}

floating_point mult_x_n(floating_point x, int n)
{
    return x * n;
}

floating_point mult_x_y(floating_point x, floating_point y)
{
    return ((int64_t)x) * y / f;
}

floating_point div_x_n(floating_point x, int n)
{
    return x / n;
}

floating_point div_x_y(floating_point x, floating_point y)
{
    return ((int64_t)x) * f / y;
}
