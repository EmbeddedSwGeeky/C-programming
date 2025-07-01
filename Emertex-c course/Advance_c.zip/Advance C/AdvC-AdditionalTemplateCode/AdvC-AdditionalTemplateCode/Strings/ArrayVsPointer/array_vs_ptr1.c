/* FILE: array_vs_ptr1.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    char *str1 = "hello";
    char str2[] = "hello";

    printf("sizeof(str1) = %u\n", sizeof(str1));

    printf("sizeof(str2) = %u\n", sizeof(str2));


    printf("what is this = %p\n", "hello"); 
    printf("str1 = %p\n", str1); 
    printf("str2 = %p\n", str2); 

    printf("*str1 = %c\n", *str1); 
    printf("*str2 = %c\n", *str2); 

    return 0;
}
