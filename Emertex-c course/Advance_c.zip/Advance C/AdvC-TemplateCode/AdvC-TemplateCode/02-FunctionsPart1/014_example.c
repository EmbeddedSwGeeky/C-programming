#include <stdio.h>

int main()
{
	printf("%s\n", func()); // Error, invalid use of a function returning void

	return 0;
}


void func(void)
{
	char buff[] = "Hello World";

	return buff; // some compilers might report error in this case
}
