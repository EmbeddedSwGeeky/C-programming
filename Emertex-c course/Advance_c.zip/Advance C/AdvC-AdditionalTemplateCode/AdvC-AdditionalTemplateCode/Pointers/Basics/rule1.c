/* FILE: rule1.c
 * Description: Pointer is an integer
 */

#include <stdio.h>
int main()
{
    int x, y;
    int *ptr;

    x = 10;
    ptr = 10;

    printf("x = %d\n", x);
    printf("ptr = %d\n", ptr);

    /* Check for exception (Size might differ) */
    printf("sizeof int = %lu\n", sizeof(int));
    printf("sizeof long = %lu\n", sizeof(long));
    printf("sizeof pointer = %lu\n", sizeof(int *));

    y = ptr;
    printf("y = %d\n", y);

    return 0;
}
