/* Progrom to find sum of two numbers */
#include <stdio.h>

int main()
{
    float num1, num2;
    float result;

    printf("Enter two numbers: ");
    //Get the float numbers from user (keyboard)
    scanf("%f", &num1); //Read one float value
    scanf("%f", &num2); //Read another float

    result = num1 + num2;

    printf("Sum is %f\n", result); //Use %f to print float values

    return 0;
}
