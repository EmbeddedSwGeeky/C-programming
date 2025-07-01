/* FILE: simple_ptr_add.c 
 * Description: 
 */

#include <stdio.h>

int main()
{
    char ch;
    int x = 5;
    double d;
    int *ptr = &x;
    char *cptr = &ch;
    double *dptr = &d;

    printf("cptr = %lu\n", cptr);
    printf("cptr + 1 = %lu\n", cptr + 1);

    printf("ptr = %lu\n", ptr);
    printf("ptr + 1 = %lu\n", ptr + 1);

    printf("dptr = %lu\n", dptr);
    printf("dptr + 1 = %lu\n", dptr + 1);

    return 0;
}
