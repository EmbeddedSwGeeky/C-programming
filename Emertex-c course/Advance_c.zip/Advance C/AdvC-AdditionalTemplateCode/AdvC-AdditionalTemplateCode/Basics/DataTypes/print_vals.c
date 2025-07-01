/* FILE: print_vals.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int num1, num2, sum;
    float pi;
    char ch;

    num1 = 10;
    num2 = 10;
    sum = num1 + num2;

    printf("%d\n", sum);

    pi = 3.14;
    ch = 'A';

    printf("%f\n", pi);
    printf("%c\n", ch);
    printf("%d\n", ch);

    return 0;
}
