#include <stdio.h>

int main()
{
    int matrix[3][4] = {
			{1, 2, 3, 4},
		       	{5, 6, 7, 8},
			{9, 10, 11, 12}
    			};

    int max_rows = 3, max_cols = 4;
    int row = 0, col;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", matrix[row][col]);
	    //printf("%4d", *(*(matrix + row) + col) );
	}
	printf("\n"); // To format the output. For next row.
    }

    return 0;
}
