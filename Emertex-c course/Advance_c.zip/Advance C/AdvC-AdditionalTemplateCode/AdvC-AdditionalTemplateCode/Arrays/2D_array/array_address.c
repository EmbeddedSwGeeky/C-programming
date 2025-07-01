#include <stdio.h>

int main()
{
    int a[3][4];
#if 1
    printf("sizeof(a) = %u\n", sizeof(a));
    printf("sizeof(a[0]) = %u\n", sizeof(a[0]));
    printf("sizeof(*a) = %u\n", sizeof(*a));
    printf("sizeof(a[0][0]) = %u\n", sizeof(a[0][0]));
#endif

    printf("a = %lu\n", a);
    printf("a + 1 = %lu\n", a + 1);
    printf("&a + 1 = %lu\n", &a + 1);
    printf("&a[0] + 1 = %lu\n", &a[0] + 1);
    printf("a[0] + 1 = %lu\n", a[0] + 1);
    printf("&a[0][0] + 1 = %lu\n", &a[0][0] + 1);
    return 0;
}
