/* Progrom to find sum of two numbers
 * Get the numbers from user using scanf function
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    int result;

    printf("Enter two numbers: ");
    //Get the numbers from user (keyboard)
    scanf("%d", &num1); //Read one integer
    scanf("%d", &num2); //Read another integer

    result = num1 + num2;

    printf("%d\n", result);

    return 0;
}
