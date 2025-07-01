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
    char msg[] = "Hello";
    char arr[] = "Hello World";

    print_string(msg);
    print_string(arr);
    print_string("\n");
    alternate_print_string("Hello\n");

    return 0;
}








