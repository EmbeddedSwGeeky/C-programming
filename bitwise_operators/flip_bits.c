#include <stdio.h>

#define FLIP_BITS(num)          ~(num)

int main() {
        int num = 15;

        printf("FLIP_BITS: %d\n", FLIP_BITS(num));
        return 0;
}