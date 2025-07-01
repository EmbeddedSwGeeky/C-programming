/* FILE: print_upper.c 
 * Description: 
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while(1)
    {
	//Read char
	ch = getchar();
	
	//Check for char x
	if (ch == 'x')
	    break;

	putchar(toupper(ch)); //Print upper case
    }

    putchar('\n');

    return 0;
}
