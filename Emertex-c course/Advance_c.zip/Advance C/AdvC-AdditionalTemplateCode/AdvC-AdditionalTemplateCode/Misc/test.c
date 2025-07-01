#include <stdio.h>

int count = 10;

void foo()
{
    count++;

    printf("%d\n", count);
}

int main()
{
    int count;

    printf("%d\n", count);

    count = 50;
    foo();
}
