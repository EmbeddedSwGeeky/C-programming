#include <stdio.h>

/**
 * @brief check_endianness
 * @return 0 if Big Endian, 1 if Little Endian
 */
int check_endianness(void) {
    unsigned int num = 1;
    char *c = (char*)&num;

    if (*c == 1)
        return 1;  // Little Endian
    else
        return 0;  // Big Endian
}

int main(void) {
    printf("%s\n", check_endianness() ? "Little Endian system" : "Big Endian system");
    return 0;
}
