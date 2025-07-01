#include <stdio.h>
#include <qt.h>

#if (QT_VERSION < 3)
#error "Version unsupported. Min version reqd is v3.0"
#endif

#if 0
#ifndef __STDC__
#error "Not an ANSI compiler"
#endif
#endif

void display(int val)
{
    if (val < 0)
    {
    	// Do something

	return;
    }

    printf("hello %d \n", val);
}

int main()
{
    display(-1);

    return 0;
}
