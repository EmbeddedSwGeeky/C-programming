#include <stdio.h>

int main()
{
    int x = 50, y;
    int *ptr;

    ptr = &x; // Store address of x in ptr

    *ptr = 25; // Change variable x using ptr

    printf("x = %d, *ptr = %d\n", x, *ptr);

    printf("&x = %p, ptr = %p\n", &x, ptr);

    y = *ptr + 10;

    printf("y = %d\n", y);

    printf("x = %d\n", x);

    return 0;
}
