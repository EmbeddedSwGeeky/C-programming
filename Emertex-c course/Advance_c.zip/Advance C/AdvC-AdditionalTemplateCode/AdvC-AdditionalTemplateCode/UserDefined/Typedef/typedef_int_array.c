#include <stdio.h>

// Arr is an array of 100 ints
typedef int Arr[100];

typedef char Font[8][8];

int main()
{
    int i;

    // variable a is same as int[100]
    Arr a = {1, 2, 3};

    printf("sizeof(Arr) = %zu\n", sizeof(Arr));
    printf("sizeof(Font) = %zu\n", sizeof(Font));

    /* Print some values */
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", a[i]);
    }

}
