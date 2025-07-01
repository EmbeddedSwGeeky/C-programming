#include <stdio.h>

/* Use pragma to remove structure padding */

struct student
{
    int age; /* int is 4 bytes long */
    char ch1;
    char ch2;
};

struct MyData
{
    short Data1;
    short Data2;
    short Data3;
};

int main()
{
    //struct student s;

    printf("%lu\n", sizeof(struct student));
    printf("%lu\n", sizeof(struct MyData));
    return 0;
}
