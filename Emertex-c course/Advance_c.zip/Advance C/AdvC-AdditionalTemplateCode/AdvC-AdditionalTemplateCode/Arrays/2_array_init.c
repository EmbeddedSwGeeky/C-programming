#include <stdio.h>

int main()
{
    int i;
    int a[5] = {10, 20, 30, 40, 50}; /* Initialize array */

    //int b[]; //Error Size is not specified

    int b[] = {100, 200, 300}; /* Size is equal to total no. of elements */

    puts("Array a:");
    //print array
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", a[i]);
    }

    puts("Array b:");
    //print array
    for (i = 0; i < 3; i++)
    {
	printf("%d\n", b[i]);
    }
}
