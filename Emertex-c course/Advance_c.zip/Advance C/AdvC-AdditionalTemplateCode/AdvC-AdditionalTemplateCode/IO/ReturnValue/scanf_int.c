#include <stdio.h>

int main()
{
    int x = 99, count;

    printf("Enter a number: ");
    count = scanf("%d", &x);

    if (count == 1)
    {
	printf("You entered %d\n", x);
    }
    else
    {
    	puts("You entered invalid value");
	printf("Value of x is %d\n", x);
    }
    return 0;
}
