#include <stdio.h>
#include <stdlib.h>


int (*func)(int);
int (*fptr)(int, int);

int is_lsb_bit_set(int x) {
    return (x & 1);
}

int is_msb_bit_set(int x) {
    /** calculate total bits */
    int bits = sizeof(x) * 8;
    printf("bits:%d\n", bits);

    /** get msb bit */
    return (x>>(bits - 1) & 1);
}

int get_nth_bit(int x, int n_pos) {
    return ((x >> n_pos) & 1);
}

static inline set_nth_bit(int x, int nth_bit) {
    return (x | (1 << nth_bit));
}

static inline clear_nth_bit(int x, int nth_bit) {
    return (x & ~(1 <<nth_bit));
}

static inline toggle_nth_bit(int x, int nth_bit) {
    return (x ^ (1 << nth_bit));
}

static inline flip_bits(int x) {
    return (~x);
}

int get_highest_set_bit_pos(int x) {

    int bit_len = sizeof(x) * 8;
    int pos = 0;

    for (int i = 0; i < bit_len; i++) {
        if ((x >> i) & 1)
            pos = i;
    }
    return pos;
}

int get_lowest_set_bit_pos(int x) {

    int bit_len = sizeof(x) * 8;
    int pos = 0;

    for (int i = 0; i < bit_len; i++) {
        if ((x >> i ) & 1) {
            pos = i;
            break;
        }
    }
    return pos;
}

int count_trailing_zeros(int x) {

    int bit_len = sizeof(x) * 8;
    int cnt = 0;

    if ( x > 0) {
        return 0;
    }
    for (int i = 0; i < bit_len; i++) {
        if ((x >> i) & 1) {
            break;
        }
        cnt ++;
    }
    return cnt;
}

int count_leading_zeros(int x) {

    int bit_len = sizeof(x) * 8;
    int cnt = 0;

    for (int i = 0; i < bit_len; i++) {
        if ((x << i) & (1 << bit_len -1)) {
            break;
        }
        cnt ++;
    }
    return cnt;
}

void count_zeros_n_ones(int a) {
    unsigned int x = (unsigned int) (a);

    int bit_len = sizeof(x) * 8;
    int zeros = 0;
    int ones = 0;

    for (int i = 0; i < bit_len; i++) {
        if ((x >> 1) & 1) {
            ones++;
        }
        zeros++;
    }
}


int rol32(int a, unsigned int rot) {
    unsigned int x = (unsigned int) a;

    rot %= 31;
    int dropped_msb = 0;

    while (rot--) {
        dropped_msb = (x >> 31) & 1;

        x = (x << 1) | dropped_msb;
    }
    return x;
}

int ror32(int a, unsigned int rot) {
    unsigned int x = (unsigned int) a;

    rot %= 31;
    int dropped_lsb = 0;

    while (rot--) {
        dropped_lsb = (x >> 1) & 1;

        /** clear dropped msb */
        x = ((x >> 1)& ~(1<<31));
        /** set dropped lsb as new msb */
        x = x | dropped_lsb << 31;
    }
    return x;
}


int main(int argc, char *argv[]) {
    printf("argc:%d\n", argc);

    int num = atoi(argv[1]);

    printf("num:%d\n", num);

    /** assign to function ptr */
    func = is_lsb_bit_set;

    printf("is_lsb_bit_set:%s\n", func(num)?"yes":"no");

    /** assign to function ptr */
    func = is_msb_bit_set;

    printf("is_msb_bit_set:%s\n", func(num)?"yes":"no");

    /**get bit pos */
    int pos = atoi(argv[2]);
    fptr = get_nth_bit;

    printf("get_nth_bit: %d\n", fptr(num, pos));

    return 0;
}