#include <stdio.h>

int main()
{
    int a[100];
    int i, limit, temp;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);

    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    // Reverse the array elements
    for (i = 0; i < limit / 2; i++)
    {
	temp = a[i];
	a[i] = a[limit - (i + 1)] ;
	a[limit - (i + 1)] = temp;
    }

    // Print the array after reversing
    puts("reversed array is:");
    for (i = 0; i < limit; i++)
    {
	printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}
