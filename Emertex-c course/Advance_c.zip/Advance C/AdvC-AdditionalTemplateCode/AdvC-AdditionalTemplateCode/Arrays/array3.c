#include <stdio.h>

int main()
{
    int i, size;

    printf("Enter size: ");
    scanf("%d", &size);

    if (size > 1000 || size < 0)
    {
	printf("Error: Max limit is 1000\n");
	return 1;
    }

    int a[size];

    //scanf array
    printf("Enter the elements now: ");
    for (i = 0; i < size; i++)
    {
	scanf("%d", &a[i]);
    }

    //print array
    printf("Array elements are: ");
    for (i = 0; i < size; i++)
    {
	printf("%d\n", a[i]);
    }
}
