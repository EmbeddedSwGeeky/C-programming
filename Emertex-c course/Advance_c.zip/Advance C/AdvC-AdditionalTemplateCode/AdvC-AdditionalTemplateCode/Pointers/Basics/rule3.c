/* FILE: rule4.c
 * Description: Type of a pointer
 * Illustrates: No. of bytes fetched, when de-referenced
 * type *ptr, when de-referenced gives sizeof(type) bytes
 */

#include <stdio.h>
int main()
{
    double d = 2.5;
    char ch = 'A';

    int *iptr;
    char *cptr;
    double *dptr;

    printf("Sizeof *iptr = %lu\n", sizeof(*iptr));
    printf("Sizeof *cptr = %lu\n", sizeof(*cptr));
    printf("Sizeof *dptr = %lu\n", sizeof(*dptr));

    cptr = &ch; //Store address of char ch
    dptr = &d;  //Store address of double d 

    printf("*cptr = %c\n", *cptr); //De-reference char pointer (fetches a char - 1 byte)
    printf("*dptr = %f\n", *dptr); //De-reference double pointer (fetches a double - 8 bytes)

    return 0;
}
