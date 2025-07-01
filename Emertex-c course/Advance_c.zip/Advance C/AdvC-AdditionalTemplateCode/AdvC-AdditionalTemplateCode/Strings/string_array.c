#include <stdio.h>

int main()
{
    int i;
    const char *menu[4] = {"File", "Edit", "Help", "Exit"};
    char menu2[4][8] = {"File", "Edit", "Help", "Exit"};

    puts("Menu 1");
    for(i = 0; i < 4; i++)
    {
    	puts(menu[i]);
    }

    puts("Menu 2");
    for(i = 0; i < 4; i++)
    {
    	puts(menu2[i]);
    }

    /* Accessing individual chars */
    puts("Output of char access ");
    putchar(menu[0][2]);
    putchar(menu2[3][2]);
    printf("%c", menu[0][0]);
    putchar(menu2[1][0]);

    putchar('\n');
    return 0;
}






