/* FILE - endianess.c
 * Modified at Wed Jan 27 15:47:00 IST 2016
 */

#include <stdio.h>

union endian
{
    int int_val;
    char byte[sizeof(int)];
};

int main()
{
    union endian e;

    e.int_val = 1;

    if (e.byte[0] == 1)
    {
    	puts("Little Endian");
    }
    else
    {
    	puts("Big Endian");
    }

    return 0;
}
