#include <stdio.h>

int main()
{
    short int num = 5;

    printf("size of short int = %lu\n", sizeof(short int));
    printf("size of int = %lu\n", sizeof(int));
    printf("size of long int = %lu\n", sizeof(long int));
    printf("size of long long int = %lu\n", sizeof(long long int));
    /*printf("size of long long long int = %lu\n", sizeof(long long long int));*/

    return 0;
}
