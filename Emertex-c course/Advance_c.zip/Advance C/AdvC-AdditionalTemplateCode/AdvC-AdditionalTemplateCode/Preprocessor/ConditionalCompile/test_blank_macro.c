/* FILE: test_blank_macro.c
 * Description: 
 */

#define SQUARE (x) (x * x)

#include <stdio.h>
int main   ()
{
    int size = SQUARE(5);

    printf("%d\n", size);

    return 0;
}
