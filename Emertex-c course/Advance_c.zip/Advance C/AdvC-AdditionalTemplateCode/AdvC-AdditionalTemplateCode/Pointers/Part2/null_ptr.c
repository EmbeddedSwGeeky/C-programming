#include <stdio.h>
int main()
{
    int *ptr = NULL;

    printf("ptr = %lu\n", ptr); // Print ptr
    printf("*ptr = %d\n", *ptr); // Not allowed to deref NULL pointer

    return 0;
}
