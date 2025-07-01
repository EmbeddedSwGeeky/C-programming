#include <stdio.h>

union Endian
{
		unsigned int value;
		unsigned char byte[40];
};
int main()
{
		union Endian e;
		printf("size of union = %zu\n", sizeof(e));
		return 0;
}
