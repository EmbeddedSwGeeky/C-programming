/* gets_Vs_fgets.c
 * Illustrates use of fgets, and problems with gets
 * gets is dangerous as it may lead to buffer overflow.
 * ie., it does not check for the size of the
 * input string array. This applies for scanf("%s", str)
 * also.
 * fgets is safer, as  you can specify the size of array.
 * If user enters more characters in stdin, they are ignored.
 * Only size - 1 characters are read. 1 byte is reserved for \0
 */

#include <stdio.h>

int main()
{
    char str[10];

    printf("Enter a string: ");

   //gets(str);

   fgets(str, 10, stdin);
   printf("%s\n", str);

    return 0;
}
