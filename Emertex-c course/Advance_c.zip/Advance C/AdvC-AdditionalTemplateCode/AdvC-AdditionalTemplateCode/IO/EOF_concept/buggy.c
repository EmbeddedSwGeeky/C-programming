#include <stdio.h>

int main()
{
    unsigned char ch; 

    ch = getchar();
    while (ch != EOF) // Check for EOF (Press Ctrl-D)
    {
    	putchar(ch + 1);
	ch = getchar();
    }

    puts("DONE");

    return 0;
}
