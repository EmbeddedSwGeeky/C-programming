#include <stdio.h>

int main()
{
    int x;
    int *ptr;

    ptr = &x;

    *ptr = 10;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
