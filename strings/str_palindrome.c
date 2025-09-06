/**
 * @file str_palindrome.c
 * @author your name (you@domain.com)
 * @brief: verfies palindrome or not
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */

 #include <stdio.h>
 #include <stdbool.h>


bool str_palindrome(char *str) {

    int len = 0;
    if (str == NULL) return false;

    /**calculate length */
    while(str[len] != '\0') len++;

    for(int i = 0, j = len -1; i < j; i++, j--) {

        /** compare chars */
        if (str[i] != str[j])
            return false;
    }
    return true;
}


 int main(int arc, char *argv[]) {

    if (arc < 1) return -1;

     char *str = argv[1];
    printf("Given string:%s\n", str);
    printf("%s\n", (str_palindrome(str))? "true": "false");

return 0;
 }