#include <stdio.h>

#ifndef DEBUG
#error "Please define DEBUG. "
#endif

#if(DEBUG == 1)
#define ERR_PRINT(args...) printf("%d:%s", __LINE__ , \
    __FILE__); printf(args)
#define WARN_PRINT(args...)
#elif(DEBUG == 2)
#define ERR_PRINT(args...) printf("%d:%s", __LINE__ , \
    __FILE__); printf(args)
#define WARN_PRINT(args...) printf("%d:%s", __LINE__ , \
    __FILE__); printf(args)
#endif

int main()
{
    ERR_PRINT("This is an ERROR message\n");
    WARN_PRINT("This is an WARNING Message\n");
}
