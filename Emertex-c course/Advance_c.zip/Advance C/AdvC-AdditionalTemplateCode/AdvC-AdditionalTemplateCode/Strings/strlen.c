#include <stdio.h>

int my_strlen2(const char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
    	i++;
    }
    return i;
}

int my_strlen3(const char *str)
{
    int i = 0;

    while(str[i++])
	;

    return i - 1;
}

int my_strlen(const char *str)
{
    char *temp = str;

    //while(*temp != '\0')
    while(*temp)
    {
	temp++;
    }

    return temp - str;
}
int my_strlen5(char *str)
{
    char *temp = str;

    while(*temp++)
	;

    return temp - str - 1;
}
int main()
{   
    char msg[] = "Hi";
    int len;

    len = my_strlen("Hello");
    printf("len of Hello = %d\n", len);

    len = my_strlen(msg);
    printf("len of msg = %d\n", len);

    return 0;
}
