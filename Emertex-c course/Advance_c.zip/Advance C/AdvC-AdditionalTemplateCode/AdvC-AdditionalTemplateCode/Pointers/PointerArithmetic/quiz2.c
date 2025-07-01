/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 */

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    for (i = 0; i < 5; i++)
    {
	*ptr = *(ptr + i);
	printf("%d ", *ptr);
    }

    for (i = 0; i < 5; i++)
    {
	printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");
    return 0;
}
