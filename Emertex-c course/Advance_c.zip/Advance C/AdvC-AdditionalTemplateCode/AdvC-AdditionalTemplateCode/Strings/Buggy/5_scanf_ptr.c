/* FILE: 5_scanf_ptr.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    char *str; //Un-initialized pointer

    printf("Enter a string: ");
    scanf("%s", str);
    printf("string is %s\n", str);


    return 0;
}
