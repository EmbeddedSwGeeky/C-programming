/* Program demonstrates that char literals are stored as
 * ascii values. Also demonstrates that value can be directly
 * assigned to chars
 */
#include <stdio.h>

int main()
{
    char c1 = 'A';
    char c2 = 65;
    char digit = '0';

    printf("%c %d\n", c1, c1); //%c will print the char, %d will print the ascii value
    printf("%c %d\n", c2, c2);

    printf("%c %d\n", digit, digit);

    c1 = c1 + 2; //Character is an 8 bit integer (67 gets stored)
    printf("%c %d\n", c1, c1);

    return 0;
}
