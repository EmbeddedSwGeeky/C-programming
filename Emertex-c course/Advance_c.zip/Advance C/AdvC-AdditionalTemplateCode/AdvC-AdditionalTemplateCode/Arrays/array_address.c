/* array_address.c
 * Program to illustrate similarities between arrays and pointers
 */

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    int i;

    ptr = arr;

    printf("arr = %p\n", arr);
    printf("ptr = %p\n", ptr);
    printf("arr = %p\n", arr + 1);
    printf("ptr = %p\n", ptr + 1);

    /* Print array using pointer notation */
    for (i = 0; i < 5; i++)
    {
	printf("%d ", *(ptr + i));
    }

    printf("\n");

#if 1
    /* Print array using array notation */
    for (i = 0; i < 5; i++)
    {
	printf("%d ", ptr[i]);
    }

    printf("\n");
#endif

    return 0;
}
