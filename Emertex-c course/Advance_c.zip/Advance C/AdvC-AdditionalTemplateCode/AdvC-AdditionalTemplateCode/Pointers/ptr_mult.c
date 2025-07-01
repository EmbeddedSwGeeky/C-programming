#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("%p\n", ptr);
    ptr = ptr * 3; // Pointer multiplication not allowed.
    printf("%p\n", ptr);
    return 0;
}
