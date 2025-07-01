/* FILE: basic_string_io.c 
 * Description: 
 */

#include <stdio.h>

int main()
{
    char str[20];

    printf("Enter a string: ");
    gets(str); //Read a string and store it in str
    puts(str); //Print str

    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered %s\n", str);

    return 0;
}
