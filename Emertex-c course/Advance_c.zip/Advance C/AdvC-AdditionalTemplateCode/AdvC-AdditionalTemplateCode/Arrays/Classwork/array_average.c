#include <stdio.h>

int main()
{
    int a[1000];
    int i, limit, sum;
    float average;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);
    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    // Find sum of elements
    sum = 0;
    for (i = 0; i < limit; i++)
    {
	sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    // Find average of elements
    average = (float)sum / limit;
    printf("Average = %f\n", average);

    return 0;
}
