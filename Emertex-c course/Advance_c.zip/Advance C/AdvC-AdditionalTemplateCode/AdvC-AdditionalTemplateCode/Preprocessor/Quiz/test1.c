/* FILE: test1.c
 * Description: 
 */

#include <stdio.h>

#if X==0
#error "First"
#else
#error "Second"
#endif

int main()
{
    return 0;
}
