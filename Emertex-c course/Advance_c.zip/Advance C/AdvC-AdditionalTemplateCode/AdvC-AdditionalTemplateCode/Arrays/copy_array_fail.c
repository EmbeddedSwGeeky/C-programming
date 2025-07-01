#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i;

    //Copy a to b?
    b = a;

    //print array b
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", b[i]);
    }
}
