/* FILE: 1_scanf_char_ptr.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    char str[10];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("You entered %s\n", str);

    return 0;
}
