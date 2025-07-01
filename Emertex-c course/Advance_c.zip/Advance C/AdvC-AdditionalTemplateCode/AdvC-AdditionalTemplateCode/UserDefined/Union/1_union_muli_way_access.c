#include <stdio.h>

/* Create a union type named register_type */
union register_type
{
    int reg32;
    char byte[4];
};

int main()
{
    /* Instantiate union, creates a variable named "r" */
    union register_type r;

    printf("sizeof(r) = %u\n", sizeof(r));
    printf("%p %p %p\n", &r, &r.reg32, &r.byte);

    r.reg32 = 0x12345678;

    printf("r.reg32 = %x\n", r.reg32); // Access the int
    printf("r.byte[0] = %x\n", r.byte[0]); // Access a byte (Depends on Endianness)

    r.byte[0] = 0x99; // Modify a byte.
    printf("r.reg32 = %x\n", r.reg32); // Access the int
    printf("r.byte[0] = %x\n", r.byte[0] & 0xFF); // Access a byte

    return 0;
}
