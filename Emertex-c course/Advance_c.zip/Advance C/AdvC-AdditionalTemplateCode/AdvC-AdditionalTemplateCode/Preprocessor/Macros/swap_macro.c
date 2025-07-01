#include <stdio.h>

//commented #define SWAP(a, b) a = a ^ b; b = a ^ b; a = a ^ b;

#define SWAP(a, b) \
{\
    int temp = a; \
    a = b; \
    b = temp; \
}

int main()
{
    int x = 5, y = 10;

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
