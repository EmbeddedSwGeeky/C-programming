#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch); //Read a character (%c)
    getchar(); //Read a character and discard it (Discard \n)

    printf("You entered char %c\n", ch);

    printf("Enter another char: ");
    scanf("%c", &ch); //Read a character (%c)
    printf("You entered char %c\n", ch);

    return 0;
}
