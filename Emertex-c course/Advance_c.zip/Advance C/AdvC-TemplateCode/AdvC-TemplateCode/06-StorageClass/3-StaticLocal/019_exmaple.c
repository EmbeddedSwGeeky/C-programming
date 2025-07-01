#include <stdio.h>
#if 0
int *foo()
{
	int i = 10;
	static int *j = &i ;
	return j;
}

#endif
int main()
{
	int A =10;
	static int i = 10;//foo();
	printf("*i %d\n", i);

	return 0;
}
