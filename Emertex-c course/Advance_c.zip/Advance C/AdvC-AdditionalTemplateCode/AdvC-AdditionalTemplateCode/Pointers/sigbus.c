 /* sigbus.c - Program to demostrate SIGBUS error.
  * This error occurs if we force alignment only.
  */

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv) {
    int *iptr;
    char *cptr;
 
#if 1
#if defined(__GNUC__)
# if defined(__i386__)
    /* Enable Alignment Checking on x86 */
    __asm__("pushf\norl $0x40000,(%esp)\npopf");
# elif defined(__x86_64__) 
     /* Enable Alignment Checking on x86_64 */
    __asm__("pushf\norl $0x40000,(%rsp)\npopf");
# endif
#endif
#endif
 
    /* malloc() always provides aligned memory */
    cptr = malloc(sizeof(int) + 1);
 
    /* Increment the pointer by one, making it misaligned */
    iptr = (int *) ++cptr;
 
    printf("Accessing integer\n");
    /* Dereference it as an int pointer, causing an unaligned access */
    *iptr = 42;
 
    return 0;
}
