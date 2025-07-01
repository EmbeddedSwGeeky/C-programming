#include <stdio.h>
#include <string.h>

/* Example of struct datatype without a name
 * This is generally used if you are creating
 * only one instance of the struct. i.e, Only
 * one variable */
struct
{
    int id;
    char name[30];
    char addr[150];
} stud, another_stud; // stud, another_stud are variables, of the unnamed struct

int main()
{
    stud.id = 1;
    strcpy(stud.name, "Mubeen");

    printf("id = %d\n", stud.id);

    return 0;
}
