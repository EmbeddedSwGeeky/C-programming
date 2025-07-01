#include <stdio.h>

void display(int val)
{
    if (val < 0)
    {
	printf("Error in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

	return;
    }

}

int main()
{
    printf("Iam in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

    display(-1);

    return 0;
}
