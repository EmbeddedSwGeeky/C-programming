#include <stdio.h>

#define DEBUG 1

#if (DEBUG == 1)
#define ERR_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define WARN_PRINT(args...)
#define DBG_PRINT(args...)

#elif(DEBUG == 2)
#define ERR_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define WARN_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define DBG_PRINT(args...)

#elif(DEBUG == 3)
#define ERR_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define WARN_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define DBG_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)

#else
//#warning "DEBUG macro is not set. Please define it"
#define ERR_PRINT(args...)
#define WARN_PRINT(args...)
#define DBG_PRINT(args...)
#endif

int main()
{
    ERR_PRINT("ERROR: This is error %d\n", 3);
    DBG_PRINT("DEBUG: This is info\n");
    WARN_PRINT("WARN: This is warning %d\n", 1);
    return 0;
}
