#include <stdio.h>

/* Example code to show how to re-define a #define constant */
#ifdef BUFSIZ
#undef BUFSIZ
#endif

#define BUFSIZ 1024

int main()
{

    char buf[BUFSIZ];

    return 0;
}
