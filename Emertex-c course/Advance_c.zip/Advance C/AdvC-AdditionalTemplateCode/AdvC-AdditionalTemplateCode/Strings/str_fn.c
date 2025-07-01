#include <stdio.h>

void display(char *str)
{
    printf("%p\n", str);
    printf("%s", str);
}

int main()
{
    char *msg = "hello\n";

    display("hello\n");
    display(msg);

    return 0;
}
