/**
 * @file str_reversal.c
 * @author your name (you@domain.com)
 * @brief:: string reversal
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */
#include <stdio.h>

void swap_chars(char *c1, char *c2) {
    /** When self/same values are there it will become zero
     * let's say c1 =5 , c2 =5;
     * c1 ^ c2 = 5 ^ 5, become zero,
     * rather than actual values zero will sit there
    */
    if (c1 == c2) return;
    *c1 ^= *c2;
    *c2 ^= *c1;
    *c1 ^= *c2;
}

void str_reversal(char *str) {
    if(str == NULL) return ;

    int len = 0;
    /**manual way to calculate the string len
     * note: strlen always give len excluding null char
     *
     * if we use *str++ which moves the pointer and if we forgot to get it back then operation will fail
     * that's why use indexing like str[len]
     */
    while (str[len] != '\0') len++;

    printf("str len %d\n", len);

    for (int  i = 0, j = len - 1; i < j; i++, j--) {
        swap_chars(&str[i], &str[j]);
    }

}

int main(int argc, char *argv[]) {

    if(argc < 1) return -1;

    char *str = argv[1];

    printf("Before reversal: %s\n", str);
    str_reversal(str);
    printf("After reversal: %s\n", str);

return 0;
}