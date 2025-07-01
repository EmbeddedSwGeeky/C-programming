/* FILE: print_upper.c 
 * Description: 
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    //Read char until user enters x
    while((ch = getchar()) != 'x')
    {
	putchar(toupper(ch)); //Print upper case
    }

    putchar('\n');

    return 0;
}
