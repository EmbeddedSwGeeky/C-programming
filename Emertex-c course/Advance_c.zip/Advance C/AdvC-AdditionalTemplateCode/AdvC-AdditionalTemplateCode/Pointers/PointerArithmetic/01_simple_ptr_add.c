/* FILE: simple_ptr_add.c 
 * Description: 
 */

#include <stdio.h>

int main()
{
    double x = 5;
    double *ptr = &x;

    printf("ptr = %lu\n", ptr);
    printf("ptr + 1 = %lu\n", ptr + 1);

    return 0;
}
