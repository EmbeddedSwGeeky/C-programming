#include <stdio.h>

int main()
{
	//int num = 5;
	float num = 10.23;

	printf("%u:%u:%u\n", sizeof(float), sizeof num, sizeof (10.25));

	return 0;
}
