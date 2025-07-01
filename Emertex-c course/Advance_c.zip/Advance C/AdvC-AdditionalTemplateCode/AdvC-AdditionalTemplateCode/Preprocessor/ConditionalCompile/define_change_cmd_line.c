#include <stdio.h>

//#define SPACE_OPTIMIZED

int main()
{
    int x, y, temp;

#ifdef SPACE_OPTIMIZED
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
#else
    temp = x;
    x = y;
    y = temp;
#endif

    return 0;
}
