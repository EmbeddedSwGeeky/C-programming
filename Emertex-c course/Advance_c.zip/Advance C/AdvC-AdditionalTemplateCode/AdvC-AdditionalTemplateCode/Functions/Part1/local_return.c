#include <stdio.h>

int * foo(void)
{
    int a = 10;
    return &a; 
}

int main()
{
    int *ptr;

    ptr = foo();
    printf("*ptr = %d\n", *ptr);

    return 0;
}
