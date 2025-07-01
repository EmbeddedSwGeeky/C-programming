#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &num); //Read an integer

    getchar(); //Read and discard a character (Discard \n)

    printf("You entered number %d\n", num);

    printf("Enter a char: ");
    scanf("%c", &ch); //Read a character (%c)
    printf("You entered char %c %d\n", ch, ch);

    return 0;
}
