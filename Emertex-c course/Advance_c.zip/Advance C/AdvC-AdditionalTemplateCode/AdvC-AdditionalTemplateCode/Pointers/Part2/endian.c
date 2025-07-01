#include <stdio.h>

int main()
{
    int x = 1;
    char *ptr = (char *)&x;

    if (*ptr == 1)
    {
    	puts("Little Endian");
    }
    else
    {
    	puts("Big Endian");
    }

    return 0;
}
