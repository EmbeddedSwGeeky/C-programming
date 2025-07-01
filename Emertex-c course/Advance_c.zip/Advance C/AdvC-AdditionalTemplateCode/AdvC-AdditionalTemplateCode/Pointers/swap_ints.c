#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int x = 5, y = 10;

    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}
