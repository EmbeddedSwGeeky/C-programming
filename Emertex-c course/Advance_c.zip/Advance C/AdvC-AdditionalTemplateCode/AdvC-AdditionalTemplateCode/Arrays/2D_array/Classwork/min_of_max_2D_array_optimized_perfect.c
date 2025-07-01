/* FILE: min_of_max_2D_array.c
 * Description: 
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    int matrix[4][4] = {{5, 10, 1, 25},
			{-7, -9, -99, -1},
			{8, 99, 1000, 50},
			{6, 1, 30, 5}
			};

    int max, min, row, col, max_rows, max_cols;
    max_rows = 4, max_cols = 4;
    int max_vals;
    min = INT_MAX;

    // Find max of each row
    for (row = 0; row < max_rows; row++)
    {
	// Assume 1st element is maximum
	max_vals = matrix[row][0];

	for (col = 1; col < max_cols; col++)
	{
	    // Compare max with next element
	    if (matrix[row][col] > max_vals)
	    {
		max_vals = matrix[row][col];
	    }
	}

	if (max_vals < min)
	{
	    min = max_vals;
	}

    }

    printf("min = %d\n", min);

    return 0;
}
