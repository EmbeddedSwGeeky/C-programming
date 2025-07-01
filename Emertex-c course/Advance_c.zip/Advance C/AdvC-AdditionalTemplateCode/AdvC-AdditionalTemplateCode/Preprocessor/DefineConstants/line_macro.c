#include <stdio.h>

void display(int val)
{
    printf("hello %d \n", val);

#line 100 "My Project"
    if (val < 0)
    {
	printf("Error in %s: %s @ %d on %s @ %s \n", __FILE__, __func__, __LINE__, __DATE__, __TIME__);

	return;
    }

}

int main()
{
    display(-1);

    return 0;
}
