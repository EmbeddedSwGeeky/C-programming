#include <stdio.h>

void my_puts2(char *str)
{
    while (*str != '\0')
    {
	putchar(*str);
	str++;
    }
    putchar('\n');

}

void my_puts(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
	putchar(str[i]);
	i++;
    }
    putchar('\n');
}

int main() {
    char name[] = "hi";
    my_puts("Hello");   // Prints Hello and \n
    my_puts("A");         // Prints A and \n
    my_puts("");           // Prints \n
    my_puts(name);

    return 0;
}
