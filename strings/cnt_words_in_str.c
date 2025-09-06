/**
 * @file cnt_words_in_str.c
 * @author your name (you@domain.com)
 * @brief:: counts no.of words in a string
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */

#include <stdio.h>


/**
 * @brief  count when space encounters in a string
 * @param str 
 */
void count_word_freq(const char *str, unsigned int *cnt) {

    if(str == NULL) return;

    while (*str != '\0')
    {
        /* If the current character(str[i]) is white space or newline or space */
        if(*str ==' ' || *str =='\n' || *str =='\t') {
            (*cnt)++;
        }
        str++;
    }

}


int main(int argc, char *argv[]) {
    if (argc < 1) return -1;

    const char *str = argv[1];
    unsigned int cnt = 0;

    count_word_freq(str, &cnt);

    printf("Given string: %s\n", str);
    printf("No.of.words:%d\n", cnt);


    return 0;
}