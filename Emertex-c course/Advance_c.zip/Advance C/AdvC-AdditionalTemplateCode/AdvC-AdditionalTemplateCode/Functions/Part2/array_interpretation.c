#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};



    int *ptr;

    //2nd interpretation (array name indicates base address of array)
    ptr = a;

    //1st interpretation (array name include whole array)
    printf("sizeof a = %u\n", sizeof(a));

    /* This is invalid. Can initialize only during declaration using this method
     * Use indices to store values in array elements */
    a[] = {6, 7, 8, 9, 10};
    printf("*ptr = %d\n", *ptr);
}
