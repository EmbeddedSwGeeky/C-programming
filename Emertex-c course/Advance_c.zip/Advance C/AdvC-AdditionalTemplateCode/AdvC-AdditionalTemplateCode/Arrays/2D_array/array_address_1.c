#include <stdio.h>

//#define print(expr) printf(#expr " = %lu\n", expr)

int main()
{
    int a[3][4];

    /* All addresses are same, but types are different */
    printf("a = %lu\n", a); //Base addr of 2D array
    printf("&a = %lu\n", &a); //Address of whole 2D array
    printf("&a[0] = %lu\n", &a[0]); //Address of 1st row
    printf("&a[0][0] = %lu\n", &a[0][0]); //Address of 1st integer element

    puts("--------------------------------");

    printf("a[1] = %lu\n", a[1]); //a[1] indicates 2nd row.
    printf("*(a + 1) = %lu\n", *(a + 1)); //Same as above

    puts("--------------------------------");

    printf("a = %lu\n", a);
    printf("a + 1 = %lu\n", a + 1); // 2nd row address
    printf("&a + 1 = %lu\n", &a + 1); //2nd 2D array (&a + 1 *sizeof (a))
    printf("&a[0] + 1 = %lu\n", &a[0] + 1); //2nd row addr
    printf("&a[0][0] + 1 = %lu\n", &a[0][0] + 1); //2nd element addr
    //print(&a[0][0] + 1);
    return 0;
}
