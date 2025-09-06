/**
 * @file str_con_upper_case.c
 * @brief:: conver str to upper case if any lower case char encounters
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */
#include <stdio.h>

void conv_str_to_lower_case(char *str) {

    if(str == NULL) return;

/** Ascii value A-65 --Z-90
 * a-97--z-122
 * always differnce 32 between chars
 */

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}




int main(int argc, char *argv[]) {
    if(argc  < 1) return -1;

    char *str = argv[1];
    printf("before conversion: %s\n", str);

    conv_str_to_lower_case(str);
    printf("after conversion: %s\n", str);

    return 0;

}