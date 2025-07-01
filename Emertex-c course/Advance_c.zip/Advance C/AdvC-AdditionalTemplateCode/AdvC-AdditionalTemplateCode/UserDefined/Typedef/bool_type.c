/* FILE: bool_type.c
 * Description: This programs illustrates the typedef to define
 * a Bool datatype using enum
 */

#include <stdio.h>

typedef enum
{
    e_false = 0,
    e_true
} Bool; //Type name is Bool

int main()
{
    //status is a variable of type Bool. It can hold e_false or e_true
    Bool status = e_false;

    if (status == e_true)
    {
	puts("Condition is true");
    }
    else
    {
	puts("Condition is false");
    }

    return 0;
}
