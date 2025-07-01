#include <stdio.h>

int main()
{
    int int_val, count;
    float float_val;
    char str[100];

    printf("Enter int float and string: ");
    count = scanf("%d%f%s", &int_val, &float_val, str);

    printf("Items read = %d\n", count);

    return 0;
}
