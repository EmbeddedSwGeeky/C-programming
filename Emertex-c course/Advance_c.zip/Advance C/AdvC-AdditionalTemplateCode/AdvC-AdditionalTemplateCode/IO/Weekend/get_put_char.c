/* FILE: get_put_char.c 
 * Description: 
 */

#include <stdio.h>

int main()
{
    char ch;

    puts("Enter a char: ");
    ch = getchar();
    putchar(ch + 1);
    putchar('\n');

    return 0;
}
