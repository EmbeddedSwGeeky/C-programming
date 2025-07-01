#include <stdio.h>

int my_strlen(char *str);

int my_strlen(char *str)
{

}


int main()
{
    char str1[] = "Hello World";
    char str2[] = "";
    int len;

    len = my_strlen(str1);
    printf("len = %d\n", len);

    len = my_strlen(str2);
    printf("len = %d\n", len);

    len = my_strlen("Hello");
    printf("len = %d\n", len);
}
