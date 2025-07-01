
/* Description: This program illustrates the use of ## (concatenate)
 * pre-processing construct. Here were are generating function definitions
 * which are similar in logic, but name and certain params vary*/

#include <stdio.h>

#define DEFINE_REG_FUNC(regaddr) \
    void set_register##regaddr(void)\
{\
    common_func(regaddr);\
    do_someting();\
}

DEFINE_REG_FUNC(100);
DEFINE_REG_FUNC(200);
DEFINE_REG_FUNC(300);
DEFINE_REG_FUNC(400);

int main()
{
    set_register100();
}
