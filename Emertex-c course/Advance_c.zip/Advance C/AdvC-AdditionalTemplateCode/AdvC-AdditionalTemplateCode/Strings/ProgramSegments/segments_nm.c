/* FILE: segments_nm.c
 * Description: 
 */

#include <stdio.h>

int init_global_x = 10; //Data seg
int un_global_y; //BSS
static int init_static_global_a = 20; //Data seg
static int un_static_global_b; //BSS

int main()
{
    int local_count = 1; //Stack (At runtime)
    static int init_static_local_count = 1; //Data seg

    return 0;
}
