/* FILE: hash_usage.c 
 * Description: 
 */

#include <stdio.h>

#define PRINT(EXP) printf(#EXP " = %d\n", EXP)

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    //printf("a + b * c + d = %d\n", a + b * c + d);
    PRINT(a + b * c + d);

    //printf("(a * c) + (b * d) - a = %d\n", (a * c) + (b * d) - a);
    PRINT((a * c) + (b * d) - a);
    return 0;
}
