#include <stdio.h>

#if 0
#if (QT_LIB < 2)
#error "Version unsupported"
#endif

#ifndef __STDC__
#error "Not an ANSI compiler"
#endif
#endif

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
    printf("Error in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

    display(-1);

    return 0;
}
