#include <stdio.h>

int main()
{
    int x, y, temp;

#if 0
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
