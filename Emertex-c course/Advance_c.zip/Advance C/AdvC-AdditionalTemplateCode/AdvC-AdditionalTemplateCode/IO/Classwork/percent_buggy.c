/* FILE: percent.c
 * Description: 
 */

#include <stdio.h>
#include <unistd.h>
int main()
{
    int i = 0;

    for (i = 0; i <= 10; i++)
    {
	printf("%d%%\r", i);
	sleep(1);
    }
    printf("\n");
    return 0;
}
