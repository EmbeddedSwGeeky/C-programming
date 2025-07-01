#include <stdio.h>

int main()
{
    int arr[3][4] = {
    			{1, 2, 3, 4},
    			{5, 6, 7, 8},
    			{9, 10, 11, 12}
    };

#if 0
    /* Print the array size */
    printf("sizeof(arr) = %u\n", sizeof(arr));

    /* Should print the row size */
    printf("sizeof(arr[0]) = %u\n", sizeof(arr[0]));
    printf("sizeof(*arr) = %u\n", sizeof(*arr));

    /* Should print the col size */
    printf("sizeof(arr[0][0]) = %u\n", sizeof(arr[0][0]));
    printf("sizeof(**arr) = %u\n", sizeof(**arr));

    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("**arr = %d\n", **arr);

#endif
    printf("arr[2][1] = %d\n", arr[2][1]);
    printf("*(*(arr + 2) + 1) = %d\n", *(*(arr + 2) + 1));

    return 0;
}








