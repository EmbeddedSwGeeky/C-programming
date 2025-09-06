/**
 * @file str_cpy.c
 * @brief:: copy from one string to other without using strcpy
 * @version 0.1
 * @date 2025-09-06
 *
 * @copyright Copyright (c) 2025
 */

#include <stdio.h>

char* str_cpy(const char *str, char *dest) {
    if (str == NULL || dest == NULL)
    {
        return NULL;
    }

    char *ret = dest;

    while ((*dest++ = *str++) != '\0');

    return ret;
}

int main(int argc, char *argv[]) {

    if (argc < 2) {
        return -1;
    }

    char dest[100] = {0};

    printf("Given string:%s\n", argv[1]);
    printf("Copied string:%s\n", str_cpy(argv[1], dest));

    return 0;
}