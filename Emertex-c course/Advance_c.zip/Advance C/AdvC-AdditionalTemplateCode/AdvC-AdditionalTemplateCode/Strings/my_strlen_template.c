/* FILE: strlen_builtin.c 
 * Description: 
 */

#include <stdio.h>

int my_strlen2(const char *str)
{
    int len = 0;

    while (*str != '\0')
    {
	len++;
	str++;
    }

    return len;
}

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
	i++;
    }

    return i;
}

int main()
{
    char name[20];
    int len;

    printf("Enter your name: ");
    //gets(name);
    fgets(name, 20, stdin);

    //get length of string name
    len = my_strlen(name);

    printf("Your name length is %d \n", len);

    return 0;
}
