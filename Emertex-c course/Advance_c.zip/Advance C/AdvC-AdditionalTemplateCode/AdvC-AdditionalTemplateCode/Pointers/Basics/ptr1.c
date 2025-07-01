#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = &x; //Store address of x in ptr

    printf("&x  = %p\n", &x);
    printf("ptr = %p\n", ptr);

//    printf("&ptr = %p\n", &ptr);

    return 0;
}
