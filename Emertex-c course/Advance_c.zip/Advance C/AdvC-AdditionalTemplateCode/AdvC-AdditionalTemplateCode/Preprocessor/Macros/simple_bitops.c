#include <stdio.h>

#define GET_BIT(num) ((num) & 1)
#define SET_BIT(num) ((num) | 1)
#define CLEAR_BIT(num) ((num) & ~1)


int main()
{
    int val = 5, x = 0xAF;
    int bit;

    bit = GET_BIT(val);
    printf("bit = %X\n", bit);

    x = CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    x = SET_BIT(x);
    printf("SET x = %X\n", x);

    x = CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    return 0;
}
