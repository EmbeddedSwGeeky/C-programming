#include <stdio.h>

void my_strcpy(char *dest, char *src);
void my_strcat(char *dest, char *src);

void my_strcpy(char *dest, char *src)
{

}
void my_strcat(char *dest, char *src)
{

}

int main()
{

    char str1[100] = "hello";
    char str2[100];

    char str3[100] = "world";

    //Copy string
    my_strcpy(str2, str1);
    printf("str2 = %s\n", str2);

    /* Concatenate str1 and str3 */
    my_strcat(str1, str3);
    printf("str1 = %s\n", str1);

    return 0;
}
