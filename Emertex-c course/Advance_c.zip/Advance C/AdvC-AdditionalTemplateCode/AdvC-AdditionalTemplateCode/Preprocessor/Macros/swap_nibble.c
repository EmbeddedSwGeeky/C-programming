#include <stdio.h>

#define SWAP_NIBBLE(num) (((num >> 4) & 0x0F) \
       	| (num << 4) & 0xF0)

int main()
{
    signed char ch = 0xAB;

    ch = SWAP_NIBBLE(ch);

    printf("ch = %X\n", ch & 0xFF);

    return;
}
