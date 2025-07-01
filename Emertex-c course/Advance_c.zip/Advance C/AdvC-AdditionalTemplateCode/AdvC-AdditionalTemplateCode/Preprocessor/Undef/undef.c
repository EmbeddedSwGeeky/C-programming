#include <stdio.h>

/* Example code to show how to re-define a #define constant */

#ifdef BUFSIZ
#undef BUFSIZ
#endif

#define BUFSIZ 1024

#ifdef TRUE
#undef TRUE
#endif

#define TRUE (!0)
#define FALSE (!1)


int main()
{
    char buf[BUFSIZ];
#define SIZE 100

    int i = SIZE;

    if (i == TRUE)
    {
    }

    return 0;
}

foo()
{
#undef SIZE
#define SIZE 500
    int i = SIZE;

}
