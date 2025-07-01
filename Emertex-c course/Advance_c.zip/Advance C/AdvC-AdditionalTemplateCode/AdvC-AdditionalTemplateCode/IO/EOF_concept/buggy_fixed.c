#include <stdio.h>

int main()
{
    int ch; 

    ch = getchar();
    while (ch != EOF) // Check for EOF (Press Ctrl-D)
    {
    	putchar(ch + 1);
	ch = getchar();
    }

    puts("DONE");

    return 0;
}
