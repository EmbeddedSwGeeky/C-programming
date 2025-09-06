/**
 * @file str_cat.c
 * @brief:: str concatenate
 * @version 0.1
 * @date 2025-09-06
 * 
 * @copyright Copyright (c) 2025
 */
#include <stdio.h>

void str_concatenate(char *str1, char *str2) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i++] = '\0';

}


void str_concate_ptr(char *str1, char *str2) {

    while(*(++str1));
    while((*(str1++) = *(str2++)));
}

 int main() {

    char str1 [100] = "hello";
    char str2 [] = "world";

    printf("str1:%s, str2:%s\n", str1, str2);
    str_concatenate(str1, str2);
    printf("str1:%s\n", str1);





 }