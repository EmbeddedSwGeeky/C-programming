#include <stdio.h>

int my_strcmp(const char *str1, const char *str2);
int my_strcasecmp(const char *str1, const char *str2);

int my_strcmp(const char *str1, const char *str2)
{
    return 0;
}

int main()
{
    my_strcmp("hello", "hello") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "Tello") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("abc", "xyz") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "helli") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hell", "hello") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "hell") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("", "") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("Hello", "HELLO") ? printf("Not Equal\n") : printf("Equal\n");

    return 0;
}





























