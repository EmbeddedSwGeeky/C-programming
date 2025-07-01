/* FILE: 5_scanf_ptr.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    char arr[10];
    char *str;

    str = arr;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("string is %s\n", arr);

#if 0
    char arr[10];

    printf("Enter a string: ");
    scanf("%s", arr);
    printf("string is %s\n", arr);
#endif

#if 0
    char *str = 5555;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("string is %s\n", str);
#endif


    return 0;
}
