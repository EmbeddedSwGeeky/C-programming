#include <stdio.h>

int main()
{
    while (1)
    {
	printf("hello");
	fflush(stdout);
	sleep(1);
    }
    return 0;
}
