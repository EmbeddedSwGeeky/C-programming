/* FILE: goto_loop.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int x = 1;

LOOP:
    printf("%d\n", x);
    x++;
    if (x <= 10)
    {
	goto LOOP;
    }

    printf("Done\n");

    return 0;
}
