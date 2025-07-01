#include <stdio.h>

/*This is a comment */
#define IS_POWER_OF_2(num) ((num != 0) && ((num & (num - 1)) == 0))

/*This is another comment */

int main()
{

    int val = 16;
    int res;

    res = IS_POWER_OF_2(val);
    if (res == 1)
    {
	printf("%d is power of 2\n", val);
    }


    if (IS_POWER_OF_2(171))
    {
	puts("Its power of 2");
    }
    else
    {
	puts("Its NOT power of 2");
    }
    
}
