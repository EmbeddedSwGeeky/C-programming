#include <stdio.h>

int main()
{
    int matrix[3][4];
    int max_rows = 3, max_cols = 4;
    int row, col, count = 1;

    printf("Enter the values\n");
    for (row = 0; row < max_rows; row++)
    {
	for (col = 0; col < max_cols; col++)
	{
	    scanf("%d", &matrix[row][col]);
	}
    }

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", matrix[row][col]);
	    //printf("%4d", *(*(matrix + row) + col) ); //Using pointer arithmetic
	}
	printf("\n"); // To format the output. For next row.
    }

    return 0;
}
