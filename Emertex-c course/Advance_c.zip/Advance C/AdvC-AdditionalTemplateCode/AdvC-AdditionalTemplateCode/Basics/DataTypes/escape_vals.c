#include <stdio.h>

int main()
{
    char a = '\7'; // Octal 7
    char b = '\xA'; // Hexadecimal A (decimal 10)
    char c = 50;

    printf("a = %d, b = %d\n", a, b);
    printf("c = %d\n", c);
    return 0;
}
