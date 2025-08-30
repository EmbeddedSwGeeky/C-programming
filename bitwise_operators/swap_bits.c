#include <stdio.h>
#include <stdint.h>

/**
 * @brief swap a nibble
 *
 */

static inline uint8_t __swap_niblle(uint8_t x) {
    return (((x & 0xF0) >> 4 ) | ((x & 0x0F) << 4));
}

/**
 * @brief : swap 1 byte: 0x1234 ---> 0x3412
 */
static inline uint16_t __swap_1byte(uint16_t x) {
    return ((x & 0xFF00) >> 8) | ((x & 0x00FF) << 8);
}

/**
 * @brief:: swap 2 bytes: 0x12345678 --->>		0x56781234
 *
 */
static inline uint32_t __swap_halfword(uint32_t x) {
	return ((x & 0xFFFF0000) >> 16) | ((x & 0xFFFF) << 16);
}


int main(void) {
    uint32_t a = 0x12345678;

    printf("%x\n",  a & ~(0xFF) | __swap_niblle(a));

    printf("%x\n",  a & ~(0xFFFF) |  __swap_1byte(a));
	printf("%x\n",  __swap_halfword(a));

    return 0;
}