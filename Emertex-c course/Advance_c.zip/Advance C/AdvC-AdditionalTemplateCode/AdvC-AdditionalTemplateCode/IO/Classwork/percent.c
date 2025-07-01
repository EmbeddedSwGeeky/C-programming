/* FILE: percent.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int i = 0;

    for (i = 0; i <= 10; i++)
    {
	printf("%3d%%\r", i);
	fflush(stdout);
	sleep(1);
    }
    printf("\n");
    return 0;
}
