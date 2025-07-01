/* array_address.c
 * Program to illustrate similarities between arrays and pointers
 */

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("arr = %lu\n", arr);
    printf("arr + 1 = %lu\n", arr + 1);
    printf("&arr + 1 = %lu\n", &arr + 1);

    return 0;
}
