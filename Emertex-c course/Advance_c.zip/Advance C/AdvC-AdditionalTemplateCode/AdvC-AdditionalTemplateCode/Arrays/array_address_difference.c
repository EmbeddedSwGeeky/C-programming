/* array_2D.c
 * Program to illustrate difference between a and &a,
 * where a is an array
 */

#include <stdio.h>

int main()
{
    //int a[3][5];
    int a[5];

    printf("a = %p\n", a); //Print base address
    printf("a + 1 = %p\n", (a + 1)); //Print next elements address
    printf("&a + 1 = %p\n", (&a + 1)); //Print next array's address
    printf("&a[0] + 1 = %p\n", (&a[0] + 1)); //Print next elements address

    printf("%u\n", (&a + 1 ) - (&a));
    printf("%u\n", (a + 1 ) - (a));
    printf("%u\n", (&a[0] + 1 ) - (&a[0]));

    // Typecast and substract. This will give difference in bytes, not elements
    printf("(a + 1)  - (a)  = %lu\n",
	    (unsigned long)(a + 1 ) - (unsigned long)(a));
    printf("(&a + 1) - (&a) = %lu\n",
	    (unsigned long)(&a + 1 ) - (unsigned long)(&a));

    /* Result is not zero for below code ! */
    printf("(&a + 1) - (a + 1) = %lu\n",
	    (long unsigned)(&a + 1) - (long unsigned)(a + 1));

    return 0;
}
