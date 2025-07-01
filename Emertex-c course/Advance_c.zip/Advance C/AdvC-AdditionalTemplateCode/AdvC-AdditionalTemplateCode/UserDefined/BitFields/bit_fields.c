#include <stdio.h>

struct control
{
    unsigned code:15;
    signed reset:3;
    signed enable:1;
    unsigned flags:12;
    unsigned priority:2;
};

struct encode
{
    long long z: 4;
    char x: 2;
    int y: 3;
};

int main()
{
    struct control ctrl;

    printf("sizeof ctrl = %u\n", sizeof(ctrl));
    printf("sizeof encode = %u\n", sizeof(struct encode));
    
    ctrl.enable = 1;
    ctrl.reset = 4;

    printf("Enable = %d, Reset = %d\n", ctrl.enable, ctrl.reset);

    return 0;
}
