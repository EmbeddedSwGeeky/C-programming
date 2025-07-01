/* FILE: strlen_builtin.c 
 * Description: 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int len;

    printf("Enter your name: ");
    //gets(name);
    fgets(name, 20, stdin);

    //get length of string name
    len = strlen(name);

    printf("Your name length is %d \n", len);

    return 0;
}
