#include <stdio.h>

unsigned int circular_right_shift(unsigned int x, int n)
{
    unsigned int result = 0;
    unsigned int no_of_bits = sizeof(x) * 8;

    if (n < 0)
    {
	printf("Error in %s(%s) @ %d on %s @ %s \n",
	__FILE__, __func__,  __LINE__, __DATE__, __TIME__);
	return 0;

    }
    

    n = n % no_of_bits;
    result = (x >> n) | (x << (no_of_bits - n));
    
    return result;
}

int main()
{
    unsigned int num = 5, shift_count = 2;
    unsigned int res;

    res = circular_right_shift(num, -1);

    num = 5, shift_count = 34;

    res = circular_right_shift(num, shift_count);
    printf("0x%X(%u) >> 0x%X(%u) = 0x%X\n", num, num, shift_count, shift_count, res);

    return 0;
}
