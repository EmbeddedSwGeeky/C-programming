#include <stdio.h>

int main()
{
	char option = 'A';
	int age = 12;;
	float height = 12.5;

	printf("The size of char is %lu\n", sizeof(char));
	printf("The size of int is %zu\n", sizeof(int));
	printf("The float is %zu\n\n", sizeof(float));

	printf("The size of char is %zu\n", sizeof(option));
	printf("The size of int is %zu\n", sizeof(age));
	printf("The float is %zu\n\n", sizeof(height));
	
	printf("The size of char is %zu\n", sizeof('A'));
	printf("The size of int is %zu\n", sizeof(12));
	printf("The float is %zu\n\n", sizeof(12.5));
	
	return 0;
}
