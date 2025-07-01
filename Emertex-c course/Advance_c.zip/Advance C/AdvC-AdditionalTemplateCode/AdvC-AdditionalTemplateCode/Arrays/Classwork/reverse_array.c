#include <stdio.h>

int main()
{
    int a[100];
    int i, j, limit, temp;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);

    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    // Reverse the array elements
    for (i = 0, j = limit -1; i < j; i++, j--)
    {
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
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
