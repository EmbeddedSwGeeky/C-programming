#include <stdio.h>

#define GET_BIT(num) ((num) & 1)
#define SET_BIT(num) (num = (num) | 1)
#define CLEAR_BIT(num) (num = (num) & ~1)

#define GET_NTH_BIT(num, pos) ((num >> pos) & 1)
#define SET_NTH_BIT(num, pos) (num = num | (1 << pos))
#define CLEAR_NTH_BIT(num, pos) (num = (num) & ~(1 << pos))


int main()
{
    int val = 5, x = 0xAF;
    int bit;

    bit = GET_BIT(val);
    printf("bit = %X\n", bit);

    CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    SET_BIT(x);
    printf("SET x = %X\n", x);

    CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    bit = GET_NTH_BIT(val, 2);
    printf("bit = %X\n", bit);

    CLEAR_NTH_BIT(x, 6);
    printf("CLEAR x = %X\n", x);

    SET_NTH_BIT(x, 6);
    printf("SET x = %X\n", x);

    CLEAR_NTH_BIT(x, 6);
    printf("CLEAR x = %X\n", x);

    return 0;
}
