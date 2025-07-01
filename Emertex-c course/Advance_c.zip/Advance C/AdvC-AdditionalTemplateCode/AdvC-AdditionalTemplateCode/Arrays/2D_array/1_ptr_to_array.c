#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5]; //Pointer to array of 5 integers
    int i = 0;

    ptr = &a; // Store the address of whole array

    printf("sizeof(ptr) = %u\n", sizeof(ptr));
    printf("sizeof(*ptr) = %u\n", sizeof(*ptr)); // *ptr gets the entire array

    printf("1st element = %d\n", (*ptr)[0]); // (*ptr) - Gets the entire 1D array
                               // (*ptr)[0] - Gets 1st element from array

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", (*ptr)[i]); // ith element from array
    } 

    //Pointer arithmetic on ptr
    printf("ptr = %p\n", ptr);
    printf("ptr + 1 = %p\n", ptr + 1);

}
