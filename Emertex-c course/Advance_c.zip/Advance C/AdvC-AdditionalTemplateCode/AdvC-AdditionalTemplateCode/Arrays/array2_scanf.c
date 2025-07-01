#include <stdio.h>

int main()
{
    float a[5];
    int i;

    puts("Enter 5 nos:");
    // store values in array
    for (i = 0; i < 5; i++)
    {
	scanf("%f", &a[i]);
    }

    //print array
    puts("Array elements are:");
    for (i = 0; i < 5; i++)
    {
	printf("%f\n", a[i]);
    }
}
