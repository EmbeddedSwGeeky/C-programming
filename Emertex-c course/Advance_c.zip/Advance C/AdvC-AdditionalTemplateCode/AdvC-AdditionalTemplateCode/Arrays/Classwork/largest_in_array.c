#include <stdio.h>

int main()
{
    int a[100];
    int i, limit, largest;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);

    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    largest = a[0]; //Assume 1st element is largest
    // Find largest
    for (i = 1; i < limit; i++)
    {
	if (a[i] > largest)
	{
	    largest = a[i];
	}
    }

    printf("Largest = %d\n", largest);

    return 0;
}
