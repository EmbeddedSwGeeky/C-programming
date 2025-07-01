#include <stdio.h>

int main()
{
    int x = 5, y = 10, z;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = ptr1;

    z = *ptr2 + 20;
    printf("%p %p\n", ptr1, ptr2);

    ptr1 = &y;
    *ptr1 = 50;

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("*ptr1 =  %d, *ptr2 = %d\n", *ptr1, *ptr2);

    return 0;
}
