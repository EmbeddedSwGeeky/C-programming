#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

void print_stud_info1(struct student stud)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud.id);
    printf("Name = %s\n", stud.name);
    printf("Address = %s\n", stud.addr);
}

void print_stud_info2(const struct student *stud_ptr)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud_ptr->id);
    printf("Name = %s\n", stud_ptr->name);
    printf("Address = %s\n", stud_ptr->addr);

}

int main()
{
    struct student s1 = {20, "Shankar", "MG Road"}; //Initialize the fields
    struct student *sptr;
    struct student stud_array[5] = {
       			             {1, "ABC", "ABC address"},
				     {2, "DEF", "DEF address"}
    				   };


    stud_array[0].id = 10;
    printf("id1 = %d\n", stud_array[0].id);
    printf("id2 = %d\n", stud_array[1].id);

    sptr = malloc(sizeof(struct student));
    //sptr = malloc(sizeof(*sptr));
    //Store values
    sptr->id = 5;
    strcpy(sptr->name, "Mubeen");
    strcpy(sptr->addr, "MG Road");

    printf("sptr->id = %d\n", sptr->id);

    print_stud_info2(sptr); //By reference

    exit(0);
    /* Print by invoking functions */
    print_stud_info1(s1);  //By value
    print_stud_info2(&s1); //By reference

    print_stud_info2(sptr); //By reference

    return 0;
}
