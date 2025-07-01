#include <stdio.h>

void change(int num)
{

    if (num < 0)
    {
	return;
    }
    else
    {
    	puts("num is +ve");
    }
}

int main()
{
    int x = -1;

    change(x);

    return 1;
}
