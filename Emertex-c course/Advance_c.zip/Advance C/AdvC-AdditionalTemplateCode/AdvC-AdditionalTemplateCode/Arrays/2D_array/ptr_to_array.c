#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5];
    int *ptr2 = a;
    int i = 0;

    ptr = &a; // Store the address of whole array
    printf("ptr = %p\n", ptr);
    printf("a   = %p\n", a);
    printf("*ptr = %p\n", *ptr);


    printf("sizeof(ptr) = %u\n", sizeof(ptr));
    printf("sizeof(*ptr) = %u\n", sizeof(*ptr)); // *ptr gets the entire array
    printf("sizeof(*ptr2) = %u\n", sizeof(*ptr2)); // *ptr2 gets the 1st element

    //Pointer arithmetic on ptr
    printf("ptr = %p\n", ptr);
    printf("ptr + 1 = %p\n", ptr + 1);

    printf("(*ptr)[0]%d\n", (*ptr)[0]); // (*ptr) - Gets the entire 1D array
                               // (*ptr)[0] - Gets 1st element from array

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", (*ptr)[i]); // ith element from array
    } 
}
