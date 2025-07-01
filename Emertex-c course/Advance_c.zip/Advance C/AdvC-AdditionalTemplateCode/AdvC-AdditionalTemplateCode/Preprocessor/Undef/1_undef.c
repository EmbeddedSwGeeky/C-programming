#include <stdio.h>

/* Example code to show #undef */
#define SIZE 100

int main()
{
    char buf[SIZE];

#undef SIZE

    printf("%d\n", SIZE);

    return 0;
}
