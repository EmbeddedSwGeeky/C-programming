#include <stdio.h>

#define METHOD1
int main()
{

#ifdef METHOD1
    puts("hello");
    printf("First case");
#else
    puts("world");
    printf("second case");
#endif


    return 0;

}
