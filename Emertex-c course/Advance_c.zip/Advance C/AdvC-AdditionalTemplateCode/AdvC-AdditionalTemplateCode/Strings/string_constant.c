#include <stdio.h>
#include <string.h>

int main()
{
    char *msg = "hello";
    char str[6] = "hello";

    printf("msg = %s\n", msg);
    printf("str = %s\n", str);

    printf("sizeof(msg) = %u\n", sizeof(msg));
    printf("sizeof(str) = %u\n", sizeof(str));

    printf("strlen(msg) = %u\n", strlen(msg));
    printf("strlen(str) = %u\n", strlen(str));

    return 0;
}
