#include <stdio.h>

//Create a bitfield structure
struct control
{
    unsigned code:15; //Specify size in bits after :
    unsigned reset:3; //Range is -4 to +3 (3 bit signed number)
    unsigned enable:1;
    unsigned flags:12;
    unsigned priority:1;
};

int main()
{
    struct control ctrl;

    printf("sizeof ctrl = %lu\n", sizeof(ctrl));
    
    ctrl.enable = 1;
    ctrl.reset = 2;

    printf("Enable = %d, Reset = %d\n", ctrl.enable, ctrl.reset);

    return 0;
}
