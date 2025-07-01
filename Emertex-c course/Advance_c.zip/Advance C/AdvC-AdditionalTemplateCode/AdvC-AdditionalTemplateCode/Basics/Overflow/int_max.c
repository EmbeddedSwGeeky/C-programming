#include <stdio.h>
#include <limits.h> // Contains the defines for INT_MAX, UINT_MAX etc.

int main()
{
    int imax = INT_MAX;
    int umax = UINT_MAX;

    printf("INT_MAX = %d\n", imax);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("UINT_MAX = %u\n", umax);
    printf("UINT_MAX = %u\n", UINT_MAX); // Should not do this (Use %u)

    return 0;
}
