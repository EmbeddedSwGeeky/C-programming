#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char ch; 

//	fptr = fopen("/etc/shells", "r");
	fptr = fopen("text3.txt", "r");

	if (fptr == NULL)
	{
			printf("FILE doesnot exists\n");
			return -1;
	}
	/* Need to do error checking on fopen() */

	while (ch = fgetc(fptr))
	{
		if (feof(fptr))
			break;

		fputc(ch, stdout);
	}

	fclose(fptr);

	return 0;
}
