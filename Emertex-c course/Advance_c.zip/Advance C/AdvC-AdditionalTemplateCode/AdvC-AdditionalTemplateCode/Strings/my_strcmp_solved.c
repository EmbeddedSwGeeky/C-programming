#include <stdio.h>

int my_strcmp(const char *str1, const char *str2);

int my_strcmp(const char *str1, const char *str2)
{
    while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
    {
	str1++, str2++;
    }

    if (*str1 == '\0' || *str2 == '\0')
	return 0;
    else
	return 1;
}

int main()
{
    my_strcmp("hello", "hello")   ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("abc", "xyz")       ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "helli")   ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hell", "hello")    ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "hell")    ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("", "")             ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("Hello", "HELLO")   ? printf("Not Equal\n") : printf("Equal\n");

    return 0;
}




























#if 0
int my_strcasecmp(const char *str1, const char *str2)
{
    while((*str1 && *str2) && (toupper(*str1) == toupper(*str2)))
    {
	str1++;
	str2++;
    }

    if(*str1 == *str2)
    {
	return 0;
    }
    else
    {
	return 1;
    }

}

//while((*s1 != '\0') && (*s1 == *s2))
int my_strcmp(const char *str1, const char *str2)
{

    //while((*str1 != '\0') && (*str1 == *str2))
    while((*str1 && *str2) && (*str1 == *str2))
    {
	str1++;
	str2++;
    }

    if(*str1 == *str2)
    {
	return 0;
    }
    else
    {
	return 1;
    }

}
#endif
