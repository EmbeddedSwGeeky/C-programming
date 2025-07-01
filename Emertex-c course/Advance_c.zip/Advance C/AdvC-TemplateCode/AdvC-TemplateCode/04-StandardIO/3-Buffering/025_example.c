#include <stdio.h>
 #include <stdio_ext.h>

int main()
{
	char ch = 'y';

	printf("Enter a string: ");

	while (1)
	{
		scanf("%c", &ch);
		while (getchar() != '\n');
//		__fpurge(stdin);// NOT PORTABLE
		printf("%c", ch);
	}

	return 0;
} 
