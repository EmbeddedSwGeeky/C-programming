/* FILE: select_menu.c 
 * Description: 
 */

#include <stdio.h>

void print_menu(char **menu)
{
    int choice = -1, i;
    
    //Print the menu
    for (i = 0; i < 5; i++)
    {
	printf("%d: %s\n", i + 1, menu[i]);
    }

    //Read the choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5)
    {
	puts("Please enter a valid choice");
	return;
    }

    //Print the selected choice
    printf("You selected %s Menu\n", menu[choice - 1]);

}

int main()
{
    char *file_menu[5] = {"File", "Edit", "View", "Insert", "Help"};

    print_menu(file_menu);

    return 0;
}
