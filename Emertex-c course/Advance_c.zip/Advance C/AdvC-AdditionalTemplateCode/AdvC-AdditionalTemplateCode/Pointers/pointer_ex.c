#include <stdio.h>

int main()
{
    int x = 50;
    int *ptr;

    ptr = &x;

    printf("&x = %p\n", &x);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);

    if(sizeof(char *) == sizeof(int *))
    {
	printf("Size of all pointers are equal\n");
    }
    else
    {
	printf("No they are not equal\n");
    }
}
