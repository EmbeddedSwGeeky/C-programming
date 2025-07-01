#include <stdio.h>

union Device
{
    char ch;
    int x;
    double d;
};

typedef union Device Device_t;

int main()
{
    union Device dev;
    Device_t var;

    printf("sizeof union = %u\n", sizeof(union Device));

    dev.x = 1;
    printf("dev.x = %d\n", dev.x); // This should print 1 
    dev.d = 0.7;

    printf("dev.x = %d\n", dev.x); // Will it print 1 ?
    printf("dev.d = %f\n", dev.d);

    return 0;
}
