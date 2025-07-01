#include <stdio.h>

int main()
{
    int x = 1;

    if (*(char *)(&x) == 1) //Type cast to char* and de-reference. This will fetch only 1 byte
    {
    	puts("Little Endian");
    }
    else
    {
    	puts("Big Endian");
    }

    return 0;
}
