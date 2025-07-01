#include <stdio.h>

void print_string(char *str)
{
    while (*str != '\0')
    {
	printf("%c", *str);
	str++;
    }
}

void alternate_print_string(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
	printf("%c", str[i]);
	i++;
    }
}

int main()
{
    char str[] = "Hello World";

    int i = 0;
    while (str[i] != '\0')
    {
	printf("%c", str[i]);
	i++;
    }
    printf("\n");

    return 0;
}








