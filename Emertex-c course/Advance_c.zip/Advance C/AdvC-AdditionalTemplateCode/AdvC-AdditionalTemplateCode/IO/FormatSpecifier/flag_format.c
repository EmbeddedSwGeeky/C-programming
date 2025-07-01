/* FILE: flag_format.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int num = 0xAF;

    printf("num = %d\n", num);
    printf("num = %o\n", num);
    printf("num = %X\n", num);

    printf("num = %#o\n", num); // Prints prefix 0
    printf("num = %#X\n", num); // Prints prefix 0X
    return 0;
}
