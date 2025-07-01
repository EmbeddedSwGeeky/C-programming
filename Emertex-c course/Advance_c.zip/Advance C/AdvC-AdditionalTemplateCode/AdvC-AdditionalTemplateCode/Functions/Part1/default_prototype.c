#include <stdio.h>

void display(void)
{
    int count = 0;

    printf("count = %d\n", ++count);
}


int main()
{
    display();
    display(100, 2, 3);
    display("hello");

    return 0;
}

