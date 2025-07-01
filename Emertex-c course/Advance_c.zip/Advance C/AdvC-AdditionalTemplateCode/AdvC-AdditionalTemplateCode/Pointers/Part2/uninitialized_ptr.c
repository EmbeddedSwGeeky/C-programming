#include <stdio.h>
int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;

    printf("*ptr = %d\n", *ptr1); //never de-reference an un initialized pointer
    printf("*ptr = %d\n", *ptr2);
    printf("*ptr = %d\n", *ptr3);

    return 0;
}
