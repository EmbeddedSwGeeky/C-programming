/**
 * @file find_str_len.c
 * @brief:: Program to demonstrate to find string length
 * @version 0.1
 * @date 2025-09-06
 *
 * @copyright Copyright (c) 2025
 */

/* find_str_len_minimal.c
 * Minimal corrected version
 */
#include <stdio.h>

int find_str_len(const char *str)
{
    int cnt = 0;

    if (str == NULL)
        return -1;

    while (str[cnt] != '\0')   /* <-- DO NOT use post-increment in the condition */
        ++cnt;

    return cnt;
}

int find_str_len_ptr(const char *str) {
    if (str == NULL)
    {
        return -1;
    }

    const char *ptr;

    ptr = str; //assigning str to ptr

    while (*ptr != '\0')
    {
        ++ptr;
    }

    return (int)(ptr - str);
}

int main(int argc, char *argv[])
{
    int len;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <string>\n", argv[0]);
        return 1;
    }

    printf("argv[1]: %s\n", argv[1]);

    len = find_str_len(argv[1]);

    if (len < 0) {
        fprintf(stderr, "Error computing length\n");
        return 2;
    }

    printf("strlen: %d\n", len);
    printf("strlen: %d\n", find_str_len_ptr(argv[1]));
    return 0;
}