#include <stdio.h>

int main()
{
	int num = 10;
	int *ptr1 = &num;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;

	printf("%d", ptr3);
	printf("%d", *ptr3);
	printf("%d", **ptr3);
	printf("%d", ***ptr3);

	return 0;
}
