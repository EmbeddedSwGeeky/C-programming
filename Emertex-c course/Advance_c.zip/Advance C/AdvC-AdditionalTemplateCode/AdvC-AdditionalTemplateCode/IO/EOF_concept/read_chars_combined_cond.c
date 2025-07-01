#include <stdio.h>

int main()
{
    int ch;
    int n_chars = 0, n_words = 0, n_lines = 0;

    // While ch is not EOF (ctrl-d)
    while( (ch = getchar()) != EOF)
    {
	//Count chars
	n_chars++;
    }
    
    printf("No. of chars = %d\n", n_chars);

    return 0;
}
