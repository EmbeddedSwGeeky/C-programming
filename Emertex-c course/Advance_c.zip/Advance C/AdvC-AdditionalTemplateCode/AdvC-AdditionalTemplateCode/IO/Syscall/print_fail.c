#include <stdio.h>

int main()
{
    int ret;

    ret = printf("hello\n");
    (ret != -1) ? printf("Printed %d chars\n", ret) : puts("Failed to print");

    close(1); // close stdout

    ret = printf("world\n");
    (ret != -1) ? fprintf(stderr, "Printed %d chars\n", ret) : fprintf(stderr, "Failed to print\n");

    return 0;
}
