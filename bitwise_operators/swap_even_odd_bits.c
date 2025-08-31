#include <stdio.h>
#include <stdint.h>

int swap_even_odd_bits(uint32_t x) {
    return ((x & 0xAAAAAAAA) >> 1) | ((x & 0x55555555) << 1);
}

int main(void) {
    uint32_t val = 0x12345678;
    printf("%x\n", swap_even_odd_bits(val));
    return 0;
}