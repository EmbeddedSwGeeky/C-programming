#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = &x;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
