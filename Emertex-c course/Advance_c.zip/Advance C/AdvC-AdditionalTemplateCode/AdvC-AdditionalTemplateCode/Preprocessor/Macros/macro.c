#include <stdio.h>

#define ABSOLUTE_VAL(x) ((x > 0) ? (x) : (-x))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

int main()
{
    int a = -5, b = 10, c = 15;
    float f1 = 25.7, f2 = 1.3, res2;
    int res;

    res = ABSOLUTE_VAL(a);
    printf("Absolute value of a is %d\n", res);

    res = MIN(b, c);
    printf("Minimum value is %d\n", res);

    res2 = MIN(f1, f2);
    printf("Minimum value is %f\n", res2);

    res = SQUARE(a + b);
    printf("Square of (a + b) = %d\n", res);

    return 0;
}
