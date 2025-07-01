/* FILE: stringize.c
 * Description: 
 */

#define TO_STRING(str) #str

#include <stdio.h>
int main()
{
    printf(TO_STRING(hello world\n));

    return 0;
}
