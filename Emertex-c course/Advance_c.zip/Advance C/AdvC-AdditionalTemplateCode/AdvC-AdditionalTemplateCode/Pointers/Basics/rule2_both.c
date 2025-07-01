#include <stdio.h>

int main()
{
    int x = 5, y;
    int *ptr;

    ptr = &x; //Store address of x in ptr

    printf("*ptr = %d\n", *ptr);
    printf("x = %d\n", x);

    y = *ptr;
    printf("y = %d\n", y);

    *ptr = *ptr + 10;
    printf("x = %d\n", x);
    // print &x and print value of ptr
    printf("&x = %p, ptr = %p\n", &x, ptr);

    return 0;
}
