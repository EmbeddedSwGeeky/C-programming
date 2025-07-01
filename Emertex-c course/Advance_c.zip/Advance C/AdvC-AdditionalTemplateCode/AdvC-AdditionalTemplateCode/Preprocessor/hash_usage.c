#include <stdio.h>

#define PRINT(expr) printf(#expr "= %d\n", expr)

int main()
{
    int x, y = 5, z = 10, a = 50, b = 12, c = 100;

    PRINT((a + b));
    //printf("(a + b) = %d\n", (a + b));

    //printf("(a + b) * c + z = %d\n", (a + b) * c + z);
}
