#include <stdio.h>

int foo()
{
	static int i;

	return ++i;
}

int main()
{
	static int x;
	for(int i=0;i<5;i++)
	{
	x = foo();
	printf("x %d\n", x);
	}

	return 0;
}
