/**
 * @file str_cmp.c
 * @brief: compare two strings
 * @version 0.1
 * @date 2025-09-06
 * 
 * @copyright Copyright (c) 2025
 */

 #include <stdio.h>

int str_cmp(const char *str1, const char *str2) {

    // Loop continues as long as:
    // 1. *str1 is not '\0'  (string1 not ended)
    // 2. *str2 is not '\0'  (string2 not ended)
    // 3. *str1 == *str2     (current characters are equal)
    while ((*str1 && *str2) && (*str1 == *str2)) {
        // Move both pointers forward to the next character
        str1++;
        str2++;
    }


    return *str1 - *str2;
}



 int main(int argc, char *argv[]) {
    const char *str1 = argv[1];
    const char *str2 = argv[2];

    printf("%d\n", str_cmp(str1, str2));
 }