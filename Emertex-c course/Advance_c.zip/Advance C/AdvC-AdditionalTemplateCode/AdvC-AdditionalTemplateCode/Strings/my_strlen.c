#include <stdio.h>

int my_strlen(char *str)
{
    char *temp = str;

    while(*str) //While *str is not '\0'
    {
    	str++;
    }

    return str - temp;
}

int my_strlen(char *str)
{
    char *temp = str;

    while(*str++)
    	;

    return str - temp - 1;
}

int my_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
	i++;
    }

    return i;
}

int my_strlen(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
	count++;
	str++;
    }

    return count;
}

int main()
{
    char msg[] = "Hi";
    int len;

    len = my_strlen("");
    printf("len of msg = %d\n", len);

    len = my_strlen("A");
    printf("len of msg = %d\n", len);

    len = my_strlen("Hello");
    printf("len of Hello = %d\n", len);

    len = my_strlen(msg);
    printf("len of msg = %d\n", len);

    return 0;
}
