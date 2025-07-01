/* FILE: 3_fgets_usage.c
 * Description: 
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
    {
	str[strlen(str) - 1] = '\0';
    }

    printf("You entered %s\n", str);

    return 0;
}
