#include <stdio.h>

int main()
{
    int num = 0x12345678;
    int *ptr = &num;
    char *cptr = (char *)&num;

    int int_val;
    char char_val;

    int_val = *ptr;
    char_val = *cptr;

    printf("*ptr = %x, int_val = %x\n", *ptr, int_val);
    printf("*cptr = %x, char_val = %x\n", *cptr, char_val);

    *cptr = 0x55;
    printf("*cptr = %x, char_val = %x\n", *cptr & 0xFF, char_val);

    return 0;
}
