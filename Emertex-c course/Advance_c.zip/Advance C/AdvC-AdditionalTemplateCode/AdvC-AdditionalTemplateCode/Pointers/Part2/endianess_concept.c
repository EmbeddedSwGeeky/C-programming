#include <stdio.h>

int main()
{
    int num = 0x12345678;
    char *cptr = &num;
    int *iptr = &num;

    printf("*iptr = %x\n", *iptr);
    printf("*cptr = %x\n", *cptr);


    return 0;
}
