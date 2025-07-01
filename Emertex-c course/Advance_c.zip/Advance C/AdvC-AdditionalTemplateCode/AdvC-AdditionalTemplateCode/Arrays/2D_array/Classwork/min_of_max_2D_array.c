/* FILE: min_of_max_2D_array.c
 * Description: 
 */

#include <stdio.h>
int main()
{
    int matrix[4][4] = {{5, 10, 1, 25},
			{-7, -9, -99, -1},
			{8, 99, 1000, 50},
			{6, 1, 30, 5}
			};

    int max, min, row, col, max_rows, max_cols;
    max_rows = 4, max_cols = 4;
    int max_vals[max_rows]; //1D array to store max values

    // Find max of each row
    for (row = 0; row < max_rows; row++)
    {
	// Assume 1st element is maximum
	max_vals[row] = matrix[row][0];

	for (col = 1; col < max_cols; col++)
	{
	    // Compare max with next element
	    if (matrix[row][col] > max_vals[row])
	    {
		max_vals[row] = matrix[row][col];
	    }
	}

	printf("max = %d\n", max_vals[row]);
    }

    //Find min in 1D array
    min = max_vals[0];
    for (row = 1; row < max_rows; row++)
    {
	if (max_vals[row] < min)
	{
	    min = max_vals[row];
	}
    }

    printf("min = %d\n", min);

    return 0;
}
