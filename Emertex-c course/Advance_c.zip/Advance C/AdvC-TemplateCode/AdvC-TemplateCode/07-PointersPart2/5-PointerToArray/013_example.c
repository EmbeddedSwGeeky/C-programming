#include <stdio.h>

int main()
{
    int (*p)[3];

    p = malloc(sizeof(*p) * 3);

    int i, j;

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    p[i][j] = (3 * i) + j + 10;
	}
    }

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%d ", p[i][j]);
	}
    }
    puts("");

    (*(p + 0))[0] = 1;
    (*(p + 1))[1] = 2;
    (*(p + 2))[2] = 3;

    printf("%u\n", &(*(p + 0))[0]);
    printf("%u\n", ((p + 0))[0]);
    printf("%u\n", &(*(p + 1))[1]);
    printf("%u\n", ((p + 1))[1]);
    printf("%u\n", &(*(p + 2))[2]);
    printf("%u\n", ((p + 2))[2]);

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%2d ", p[i][j]);
	}
    }
    puts("");

    p = 1000;

    printf("%u\n", &(*(p + 0))[0]);
    printf("%u\n", ((p + 0)));
    printf("%u\n", &(*(p + 1))[1]);
    printf("%u\n", ((p + 1))[1]);
    printf("%u\n", &(*(p + 2))[1]);
    printf("%u\n", ((p + 2))[2]);

    return 0;
}
