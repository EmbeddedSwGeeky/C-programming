#include <stdio.h>

#define SET_BIT(num, x)         (num | 1<<x)
#define CLEAR_BIT(num,x)        (num & ~(1<<x))
#define TOGGLE_BIT(num,x)       (num ^ (1<<x))

int main() {
        int num = 15;
        printf("SET_BIT: %d\n", SET_BIT(num, 5));
        printf("CLEAR_BIT: %d\n", CLEAR_BIT(num, 3));
        printf("TOGGLE_BIT: %d\n", TOGGLE_BIT(num, 3));
        return 0;
}