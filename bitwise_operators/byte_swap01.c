#include <stdio.h>
#include <stdint.h>

/**
 * @brief:: swap 2 bytes: 
 * 			0x12345678 --->>		0x78000000 | 0x00560000 | 0x00003400 | 0x00000012
 *
 */
static inline uint32_t __swap_halfword(uint32_t x) {
	return ((x & 0xFF000000) >> 24) |\
			((x & 0x00FF0000) >> 8) |\
			((x & 0x0000FF00) << 8) |\
			((x & 0x000000FF) << 24);
}

/**
 * @brief :: 0x1234567890ABCDEF
 */
static inline uint64_t __swap_word(uint64_t x) {
	return ((x & 0xFF00000000000000) >> 56) | \
			((x & 0x00FF000000000000) >> 40) | \
			((x & 0x0000FF0000000000) >> 24) | \
			((x & 0x000000FF00000000) >> 8)  | \
			((x & 0x00000000000000FF) << 56) | \
			((x & 0x000000000000FF00) << 40) | \
			((x & 0x0000000000FF0000) << 24) | \
			((x & 0x00000000FF000000) << 8);
}


int main(void) {
    uint32_t a = 0x12345678;
	uint64_t b = 0x1122334455667788;

	printf("%x\n",  __swap_halfword(a));
	printf("%llx\n", __swap_word(b));

    return 0;
}