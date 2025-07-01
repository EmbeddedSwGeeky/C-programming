
/* Description: This program illustrates the use of ## (concatenate)
 * pre-processing construct. Here were are generating function definitions
 * which are similar in logic, but name and certain params vary*/

#include <stdio.h>

void set_register100(void)
{
    common_func(100);
    do_someting();
}

void set_register200(void)
{
    common_func(200);
    do_someting();
}

void set_register300(void)
{
    common_func(300);
    do_someting();
}

void set_register400(void)
{
    common_func(400);
    do_someting();
}

int main()
{
    set_register100();
}
