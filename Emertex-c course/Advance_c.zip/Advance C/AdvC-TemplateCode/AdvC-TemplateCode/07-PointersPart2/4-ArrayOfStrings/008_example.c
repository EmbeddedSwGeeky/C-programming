#include <stdio.h>

void prirt_menu(char **menu)
{
    int i;

    for (i = 0; menu[i] != NULL; i++)
    {
	printf("%d. %s", i + 1, menu[i]);
    }

    int option;

    printf("Select your option: ");
    scanf("%d", &option);
    /* Need to error handling */
    printf("You have selected %s Menu\n", menu[option - 1]);
}

int main()
{
	char *s[] = {"File", "Edit", "View", "Insert", "Help", NULL};

	prirt_array(s);

	return 0;
}
