#include <stdio.h>

int main()
{
    //char *str = "Hello World";
    char str[] = "Hello World";

    printf("%s\n", str);
    str[1] = 'i';
    printf("%s\n", str);

    return 0;
}
