#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src)
{
    while(*src != '\0')
    {
    	//Copy each element
    	*dest = *src;
    	
    	//Increment address
    	dest++, src++;
    }

    *dest = '\0'; // Terminate the string

}

void my_strcat(char *dest, const char *src)
{
    int i, len, j = 0;;

    //Get last index of dest
    i = strlen(dest);

    //Copy src to end of dest
    while(src[j] != '\0')
    {
    	dest[i] = src[j];
    	i++, j++;
    }

    dest[i] = '\0'; // Terminate the string

}

int main()
{

    char str1[100] = "hello";
    char str2[100];

    char str3[100] = "world";

    my_strcpy(str2, str1);

    printf("str2 = %s\n", str2);

    /* Concatenate str1 and str3 */
    my_strcat(str1, str3);

    printf("str1 = %s\n", str1);

    return 0;
}
