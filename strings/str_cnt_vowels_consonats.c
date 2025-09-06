/**
 * @file str_con_upper_case.c
 * @brief:: conver str to upper case if any lower case char encounters
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */
#include <stdio.h>


struct freq {
    int vowels_cnt;
    int consonants;
}cnt;

void cnt_vowel_conso_freq(char *str, struct freq *cnt) {

    if(str == NULL) return;


/** Ascii value A-65 --Z-90
 * a-97--z-122
 * always differnce 32 between chars
 */

    for (int i = 0; str[i] != '\0'; i++)
    {
        if( ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U')) ||
        ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))) {
            cnt->vowels_cnt++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            cnt->consonants++;
        }
    }
}




int main(int argc, char *argv[]) {
    if(argc  < 1) return -1;

    char *str = argv[1];
    printf("before conversion: %s\n", str);

    cnt_vowel_conso_freq(str, &cnt);
    printf("vowels:%d, consonants:%d\n", cnt.vowels_cnt, cnt.consonants);

    return 0;

}