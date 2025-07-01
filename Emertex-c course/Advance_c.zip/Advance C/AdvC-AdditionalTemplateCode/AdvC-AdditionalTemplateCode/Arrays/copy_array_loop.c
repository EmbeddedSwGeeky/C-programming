#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i;

    //Copy a to b, element by element
    for (i = 0; i < 5; i++)
    {
	b[i] = a[i];
    }

    //print array b
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", b[i]);
    }
}
