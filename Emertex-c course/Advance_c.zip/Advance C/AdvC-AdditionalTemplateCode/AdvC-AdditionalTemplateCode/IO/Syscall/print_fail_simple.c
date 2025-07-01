#include <stdio.h>

int main()
{
    int ret;

    ret = printf("hello\n");

    close(1); // close stdout

    ret = printf("world\n");

    return 0;
}
