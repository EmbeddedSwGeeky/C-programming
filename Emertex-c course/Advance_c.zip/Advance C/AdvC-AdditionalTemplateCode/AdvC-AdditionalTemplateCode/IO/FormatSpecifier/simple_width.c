#include <stdio.h>

int main()
{
    char *str = "hi";
    printf("%s\n", str);
    printf("%9s\n", str);

#if 0
    printf("%3d\n", 1);
    printf("%3d\n", 12);
    printf("%3d\n", 123);
    printf("%3d\n", 1234);

    printf("%-3d:\n", 1);
    printf("%-3d:\n", 12);
    printf("%-3d:\n", 123);
    printf("%-3d:\n", 1234);

#endif
    return 0;
}
