/* seg_fault.c
 * Program to illustrate array out of bounds.
 * This also illustrates segfault
 */

#include <stdio.h>

int main()
{
    int a[5], i;
    for(i = 0; i <= 5050; i++)
    {
	printf("%d\n", a[i]);
    }

    return 0;
}

