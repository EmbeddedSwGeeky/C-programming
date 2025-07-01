/* FILE: rule2_address_op.c
 * Description: Rule 2 - Use & operator to access the address of a variable
 */

#include <stdio.h>
int main()
{
    int x;
    int y;
    int *ptr;

    printf("&x = %p\n", &x);
    printf("&y = %p\n", &y);
    printf("&ptr = %p\n", &ptr);

    return 0;
}
