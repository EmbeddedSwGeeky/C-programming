/**
 * @file str_con_upper_case.c
 * @brief:: conver str to upper case if any lower case char encounters
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */
#include <stdio.h>

void conv_str_to_up_case(char *str) {

    if(str == NULL) return;



    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}




int main(int argc, char *argv[]) {
    if(argc  < 1) return -1;

    char *str = argv[1];
    printf("before conversion: %s\n", str);

    conv_str_to_up_case(str);
    printf("after conversion: %s\n", str);

    return 0;

}