#include <stdio.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

void print_stud_info1(struct student stud);
void print_stud_info2(const struct student *stud_ptr);

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
    struct student s1; // s1 is a variable of type struct student
    struct student s2 = {20, "Shankar", "MG Road"}; //Initialize the fields

    printf("Enter id name and address\n");
    scanf("%d%s%s", &(s1.id), s1.name, s1.addr);

    /* Print by invoking functions */
    print_stud_info1(s1);
    print_stud_info2(&s2);

    return 0;
}
