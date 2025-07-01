#include <stdio.h>

//commented #define SWAP(a, b) a = a ^ b; b = a ^ b; a = a ^ b;

#define SWAP(a, b) \
do{\
    int temp = a; \
    a = b; \
    b = temp; \
}while(0)

int main()
{
    int x = 5, y = 10;

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
