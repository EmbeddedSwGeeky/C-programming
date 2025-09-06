/**
 * @file str_con_upper_case.c
 * @brief:: conver str to upper case if any lower case char encounters
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */
#include <stdio.h>


struct freq {
    int alphabet_cnt;
    int digit_cnt;
    int char_cnt;
}cnt;

void cnt_freq_chars_as_per_case(char *str, struct freq *cnt) {

    if(str == NULL) return;


/** Ascii value A-65 --Z-90
 * a-97--z-122
 * always differnce 32 between chars
 */

    for (int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            cnt->alphabet_cnt++;
        } else if ((str[i] >= '0' && str[i] <= '9')) {
            cnt->digit_cnt++;
        } else cnt->char_cnt++;
    }
}




int main(int argc, char *argv[]) {
    if(argc  < 1) return -1;

    char *str = argv[1];
    printf("before conversion: %s\n", str);

    cnt_freq_chars_as_per_case(str, &cnt);
    printf("alphabet:%d, digits:%d, special_chars:%d\n", cnt.alphabet_cnt, cnt.digit_cnt, cnt.char_cnt);

    return 0;

}