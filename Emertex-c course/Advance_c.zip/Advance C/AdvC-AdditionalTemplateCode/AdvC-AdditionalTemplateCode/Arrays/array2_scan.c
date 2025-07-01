#include <stdio.h>

int main()
{
    int a[5];
    int i;

    printf("Enter 5 elements\n");
    // store values in array from user
    for (i = 0; i < 5; i++)
    {
	scanf("%d", &a[i]);
    }

    puts("Values in array");
    //print array
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", a[i]);
    }
}
