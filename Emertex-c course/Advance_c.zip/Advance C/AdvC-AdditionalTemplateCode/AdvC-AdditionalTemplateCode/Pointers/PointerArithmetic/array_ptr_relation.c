/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 */

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
	printf("%d ", *(a + i));
    }

    printf("\n");
    return 0;
}
