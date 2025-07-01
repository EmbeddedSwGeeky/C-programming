/* FILE: 1_scanf_char_ptr.c
 * Description: 
 */

#include <stdio.h>
#include <ctype.h>

void get_string(char *str, int size)
{
    int i;
    for (i = 0; i < (size - 1); i++)
    {
	scanf("%c", &str[i]);
	//str[i] = getchar();

	if (isspace(str[i]))
	    break;

    }
    str[i] = '\0'; // Terminate the string
}

int main()
{
    char str[10];

    printf("Enter a string: ");
    /* Scanf does not detect the size of the array.
     * Hence buffer overflow can happen, if user enters
     * more than array size characters. Same applies for
     * gets() function. Hence you get a message gets() is dangerous.
     * scanf("%s", str); */
    get_string(str, sizeof(str)); 

    printf("You entered %s\n", str);

    return 0;
}
