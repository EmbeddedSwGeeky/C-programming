/* FILE: 3_str_book_template.c
 * Description: 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "emertxe";
    char a[5] = "hello", b[] = "hi", c[5] = "hi";
    char str1[] = "hi", str2[] = {'h', 'i'};

    printf("a = %s\n", a);
//    printf("strlen a = %u\n", strlen(a));
    //printf("b = %s\n", b);
    //printf("str2 = %s\n", str2);

#if 0
    //printf("a = %s\n", a);
    printf("b = %s\n", b);
    printf("c = %s\n", c);

    printf("sizeof a = %u, b = %u, c = %u\n", sizeof(a), sizeof(b),
	    sizeof(c));

    printf("strlen a = %u, b = %u, c = %u\n", strlen(a), strlen(b),
	    strlen(c));

    printf("strlen str = %u\n", strlen(str));
#endif

    return 0;
}
