/* FILE: register1.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    register int i = 5;

    for (i = 0; i < 10; i++)
    {
	puts("hello");
    }
    return 0;
}
