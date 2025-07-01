/* FILE: 4_string_using_pointer.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    char str[10] = "hello";
    char *ptr, *ptr2;
    int i = 0;

    ptr = str; // Store base address of str in ptr
    while (*ptr != '\0') //Check for null character (End of string)
    {
	putchar(*ptr);
	ptr++; //Increment ptr to point to next character
    }

    putchar('\n');

    /* Second Method to access strings using pointer */
    ptr2 = str;
    while (ptr2[i] != '\0') //Check for null character (End of string)
    {
	putchar(ptr2[i]);
	i++;
    }

    putchar('\n');

    printf("str = %p\nptr = %p\nptr2 = %p\n",
	    str, ptr, ptr2);

    return 0;
}
