/* FILE: select_menu_2d.c
 * Description: 
 */

#include <stdio.h>

void print_menu(int max_rows, int max_cols, char menu[max_rows][max_cols])
{
    int choice = -1, i;
    
    //Print the menu
    for (i = 0; i < max_rows; i++)
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
    char file_menu[5][10] = {"File", "Edit", "View", "Insert", "Help"};

    print_menu(5, 10, file_menu);

    return 0;
}
