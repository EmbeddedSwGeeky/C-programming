/* FILE: percent_discard.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
	printf("\r%3d%%", i);
	fflush(stdout);
	sleep(1);
    }
    printf("\n");
    return 0;
}
