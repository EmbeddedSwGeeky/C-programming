/* FILE: simple_str.c
 * Description: 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "hello";

    printf("size = %u, len = %u\n", sizeof(str), strlen(str));

    return 0;
}
