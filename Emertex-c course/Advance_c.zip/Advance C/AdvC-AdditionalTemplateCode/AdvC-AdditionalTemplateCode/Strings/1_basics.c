/* FILE: 1_basics.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    char name[5];
    int size = 5, i;

    name[0] = 'h';
    name[1] = 'i';
    name[2] = '\0';
    name[3] = 'X';

    printf("Name = %s\n", name);

    for (i = 0; i < size; i++)
    {
	printf("(%c:%d)\n", name[i], name[i]);
    }

    printf("Done\n");

    return 0;
}
