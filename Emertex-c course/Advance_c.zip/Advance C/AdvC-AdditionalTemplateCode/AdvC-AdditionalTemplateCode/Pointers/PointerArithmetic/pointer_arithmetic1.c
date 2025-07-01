/* FILE: pointer_arithmetic1.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;

    //store address of a in ptr (2nd interpretation)
    ptr = a;
    printf("ptr = %p, &a = %p\n", ptr , &a);

    ptr = ptr + 1;
    printf("ptr = %p\n", ptr);
    return 0;
}
