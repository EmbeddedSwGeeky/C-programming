#include <stdio.h>

int main()
{
    int ch;
    int n_chars = 0, n_words = 0, n_lines = 0;

    ch = getchar();
    while (ch != EOF) // Check for EOF (Press Ctrl-D)
    {
	//Count chars
	n_chars++;
	ch = getchar();
    }

    printf("No. of chars = %d\n", n_chars);

    return 0;
}
