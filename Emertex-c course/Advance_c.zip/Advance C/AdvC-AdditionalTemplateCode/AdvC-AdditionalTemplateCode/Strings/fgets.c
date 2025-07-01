#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check if last char is \n
    if (str[strlen(str) - 1] == '\n')
    {
	// Replace \n with \0
	str[strlen(str) - 1] = '\0';

    }
    printf("%s\n", str);

    return 0;
}
