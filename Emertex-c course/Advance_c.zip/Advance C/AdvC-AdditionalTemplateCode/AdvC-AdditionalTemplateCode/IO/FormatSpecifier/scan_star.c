#include <stdio.h>

int main()
{
    int sum = 0;
    int num1, num2, num3;
    char ch1, ch2;

    printf("Enter numbers as comma/space/colon seperated values\n");
    //scanf("%d%c%d%c%d", &num1, &ch1, &num2, &ch2, &num3);
    scanf("%d%*c%d%*c%d", &num1, &num2, &num3); // Skips a char

    sum = num1 + num2 + num3;
    printf("Sum = %d\n", sum);

    return 0;
}
