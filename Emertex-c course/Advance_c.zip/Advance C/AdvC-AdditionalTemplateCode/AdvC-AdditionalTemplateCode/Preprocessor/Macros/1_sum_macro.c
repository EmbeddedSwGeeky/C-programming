#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main()
{
    int a = 5, b = 10, res;
    float val1 = 2.5f, val2 = 3.0f, res2;

    // Macros are not type specific
    res = SUM(a, b);
    res2 = SUM(val1, val2);
    printf("res = %d\n", res);
    printf("res2 = %f\n", res2);

    return 0;
}
