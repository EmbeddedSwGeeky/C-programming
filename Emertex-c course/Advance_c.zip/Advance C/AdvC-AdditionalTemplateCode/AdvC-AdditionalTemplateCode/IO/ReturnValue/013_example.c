#include <stdio.h>

int main()
{
    int ret;
    int num = 12345678;
    char string[] = "Hello World";

    ret = printf("%s\n", string);
    printf("The previous printf() printed %d chars\n", ret);

    ret = printf("%d", num);
    printf("The previous printf() printed %d chars\n", ret);

    return 0;
}
