#include <stdio.h>

int main()
{
    int width;
    for (width = 1; width < 15; width++)
    {
	printf("%*d\n", width, 1);
    }
    return 0;
}
