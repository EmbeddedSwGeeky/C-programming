/* FILE - char_overflow.c
 * Description: Demonstrates Integer truncation, and Overflow
 */

#include <stdio.h>

int main()
{
    unsigned char u_ch = 250;
    signed char s_ch = 125;

    u_ch = u_ch + 10; // 250 + 10
    printf("u_ch = %u\n", u_ch);

    s_ch = s_ch + 10; // 125 + 10
    printf("s_ch = %d\n", s_ch);

    s_ch = -128 - 2;
    printf("s_ch = %d\n", s_ch);


    return 0;
}
