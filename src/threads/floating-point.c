#include "threads/floating-point.h"
#include <inttypes.h>

floating_point Convert_to_fixed_point(int n)
{
    return n << 14;
}

int Convert_to_integer(floating_point x)
{
    return x >> 14;
}

// (x + f / 2) / f if x >= 0,
// (x - f / 2) / f if x <= 0.
int round_down(floating_point x)
{
    if (x >= 0)
    {
        return (x + 8192) >> 14;
    }
    return (x - 8192) >> 14;
}

floating_point add_x_y(floating_point x, floating_point y)
{
    return x + y;
}

floating_point add_x_n(floating_point x, int n)
{
    return x + (n << 14);
}
floating_point sub_x_y(floating_point x, floating_point y)
{
    return x - y;
}

floating_point sub_x_n(floating_point x, int n)
{
    return x - (n << 14);
}

floating_point mult_x_n(floating_point x, int n)
{
    return x * n;
}

floating_point mult_x_y(floating_point x, floating_point y)
{
    return (((int64_t)x) * y) >> 14;
}

floating_point div_x_n(floating_point x, int n)
{
    return x / n;
}

floating_point div_x_y(floating_point x, floating_point y)
{
    return (((int64_t)x) << 14) / y;
}