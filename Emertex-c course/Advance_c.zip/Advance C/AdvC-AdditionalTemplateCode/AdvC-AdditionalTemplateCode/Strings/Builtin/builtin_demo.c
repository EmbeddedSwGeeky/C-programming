#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "hello";
    char str2[100];
    char str3[100] = "world";

    //Copy string
    strcpy(str2, str1);
    printf("str2 = %s\n", str2);

    /* Concatenate str1 and str3 */
    strcat(str1, str3);
    printf("str1 = %s\n", str1);

    return 0;
}
