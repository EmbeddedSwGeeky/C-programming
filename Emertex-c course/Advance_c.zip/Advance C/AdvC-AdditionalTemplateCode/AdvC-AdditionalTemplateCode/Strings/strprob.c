#include <stdio.h>

int main()
{
    char str[10];

    printf("Enter a string: ");
    //scanf("%s", str);
    gets(str);
    printf("%s\n", str);

    return 0;
}
