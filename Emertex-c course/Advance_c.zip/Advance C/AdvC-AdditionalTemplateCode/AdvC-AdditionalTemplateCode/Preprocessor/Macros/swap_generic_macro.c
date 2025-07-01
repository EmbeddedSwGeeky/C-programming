#include <stdio.h>

// Multi line macro
#define SWAP(a, b, data_type) \
{\
    data_type temp = a; \
    a = b; \
    b = temp;\
}

int main()
{
    int x = 5, y = 10;
    double d1 = 12.5, d2 = 25.0;

    SWAP(x, y, int);
    printf("x = %d, y = %d\n", x, y);

    SWAP(d1, d2, double);
    printf("d1 = %f, d2 = %f\n", d1, d2);

    return 0;
}
