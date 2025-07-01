#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    char temp[30];
    unsigned int id;
    int status;

    printf("Enter name: ");
    status = scanf("%[a-zA-Z]", name);

    if (status == 1) //Check whether user typed alphabet correctly
    	printf("Name: %s\n", name);
    else
    {
    	printf("%s\n", "You entered invalid name");
    	return 1;
    }

    getchar(); //Ignore \n

    printf("Enter an ID: ");
    status = scanf("%[0-9]", temp);
    if (status == 1)
    {
    	//printf("Print string temp: %s\n", temp);
    	id = atoi(temp); //Convert string to integer
    	printf("ID: %d\n", id);
    }
    else
    {
    	printf("%s\n", "You entered invalid ID");
    	return 1;
    }

    return 0;
}
