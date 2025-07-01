/* FILE: 2_basics2.c
 * Description: 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[5] = "hi";
    int len;

    printf("Name = %s\n", name);
    puts("hello");
    puts(name);

    len = strlen(name);
    printf("Length = %d\n", len);

    return 0;
}

