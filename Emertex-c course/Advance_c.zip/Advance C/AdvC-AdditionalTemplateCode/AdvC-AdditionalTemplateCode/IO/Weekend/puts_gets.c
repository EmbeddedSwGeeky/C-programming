/* FILE: puts_gets.c 
 * Description: 
 */

#include <stdio.h>

int main()
{
    char str[10] = "hello";
    char name[10];

    //printf("str = %s\n", str);
    puts(str);

    printf("Enter your name: ");
    //gets(name); // Read a string
    fgets(name, sizeof(name), stdin);
    //scanf("%s", name);
    printf("Hello %s\n", name);

    return 0;
}
