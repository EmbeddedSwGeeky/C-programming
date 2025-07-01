/* array_out_of_bounds.c
 * Program to illustrate array out of bounds
 */

#include <stdio.h>

int main()
{
    int x[2] = {1, 2};
    int y[2];
    int z[2] = {3, 4};
    int i;

    printf("Enter the elements for y[]\n");
    for (i = 0; i < 3; i++)
    {
	scanf("%d", &y[i]);
    }

    y[-1] = 10;

    printf("Values of x[] are:\n");
    for (i = 0; i < 2; i++)
    {
	printf("%d ", x[i]);
    }
    printf("\n");


    printf("Values of z[] are:\n");
    for (i = 0; i < 2; i++)
    {
	printf("%d ", z[i]);
    }
    printf("\n");
    return 0;
}





