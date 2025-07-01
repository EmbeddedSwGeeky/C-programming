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

/* Create a new type StudentInfo */
typedef struct student StudentInfo;

static void print_stud_info1(StudentInfo stud);
static void print_stud_info2(const StudentInfo *sptr);

static void print_stud_info1(StudentInfo stud)
{
    printf("id = %d\n", stud.id);
    printf("name = %s\n", stud.name);
    printf("addr = %s\n", stud.addr);
}

static void print_stud_info2(const StudentInfo *sptr)
{
    printf("id = %d\n", sptr->id);
    printf("name = %s\n", sptr->name);
    printf("addr = %s\n", sptr->addr);
}

int main()
{
    StudentInfo s1; // s1 is a variable of type StudentInfo
    StudentInfo s2 = {20, "Shankar", "MG Road"};
    StudentInfo *sptr;

    sptr = &s1;

    s1.id = 10;
    strcpy(s1.name, "Mubeen");
    strcpy(s1.addr, "MG Road");

    print_stud_info1(s1);
    print_stud_info2(&s2);

#if 0
    printf("id = %d\n", s1.id);
    printf("name = %s\n", s1.name);
    printf("addr = %s\n", s1.addr);


    printf("id = %d\n", (*sptr).id);
    printf("name = %s\n", (*sptr).name);
    printf("addr = %s\n", (*sptr).addr);

    printf("id = %d\n", s2.id);
    printf("name = %s\n", s2.name);
    printf("addr = %s\n", s2.addr);
#endif
    return 0;
}
