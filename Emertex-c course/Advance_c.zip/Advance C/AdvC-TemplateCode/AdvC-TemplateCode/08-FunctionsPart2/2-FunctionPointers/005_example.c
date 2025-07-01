#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int (*fptr)(int, int);

	fptr = add;

	printf("%d\n", fptr(11, 10));
	printf("%d\n", (*fptr)(7, 6));

	return 0;
}
