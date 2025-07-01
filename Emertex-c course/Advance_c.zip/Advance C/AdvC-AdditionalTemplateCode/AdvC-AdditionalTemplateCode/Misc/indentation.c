/* FILE: indentation.c
 * Description: File contains how to indent and space a file
 * Date: Wed Sep 28 15:22:51 IST 2016
 */

#include <stdio.h>
//      ^
//      | space after include

int main()
{
    int num1, num2, num3;
    // Space after comma
    int val = 0, i;
    // Space between binary operator and operands
    // No space for unary operator (eg: !num, ~num)

    // Wrong way
    val=~num1*(num2+num3) -(num1 +num2);

    // Correct way
    val = ~num1 * (num2 + num3) - (num1 + num2);

    for (i = 0; i < 100; i++)
    {
	if (num2 > num3)
	{
	    printf("%d is greater than %d\n", num2, num3);
	}
    }

    return 0;
}
