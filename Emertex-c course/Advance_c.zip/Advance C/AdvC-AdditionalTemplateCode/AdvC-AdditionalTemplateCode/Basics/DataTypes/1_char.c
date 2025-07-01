#include <stdio.h>

int main()
{
    char ch = 'A';
    char digit = '5';

    putchar(ch);
    putchar(':');
    putchar('X');
    putchar('\n');

    printf("digit is %c\n", digit);

    printf("%c\n:\nX\n", ch);

    return 0;
}
