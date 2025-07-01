#include <stdio.h>

int main()
{
    while (1)
    {
	printf("hello");
	fflush(stdout); //flush o/p buffer
	sleep(1);
    }
    return 0;
}
