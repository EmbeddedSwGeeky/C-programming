#include <stdio.h>

int main()
{
    char x;
    unsigned char y;

    x = -1;
    y = -1;

    printf("x = %d\n", x);
    printf("y = %u\n", y);

    printf("x = %X\n", x & 0xFF);
    printf("y = %X\n", y & 0xFF);

}
