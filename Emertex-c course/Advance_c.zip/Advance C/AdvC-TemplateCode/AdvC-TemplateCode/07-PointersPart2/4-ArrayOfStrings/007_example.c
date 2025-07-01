#include <stdio.h>

int main()
{
	char s[3][8] = {
		"Array",
		"of",
		"Strings"
	}

	printf(“%s %s %s\n”, s[0], s[1], s[2]);

	for (i = 0; i < 3; i++)
	{
	    for (j = 0; s[i][j] != '\0'; j++)
	    {
		printf("%c", s[i][j]);
	    }
	    printf(" ");
	}
	printf("\n");

	return 0;
}
