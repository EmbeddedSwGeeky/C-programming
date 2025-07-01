#include <stdio.h>
#include <stdlib.h>


void print_2D_array(int **ptr, int max_cols, int max_rows);

void print_2D_array(int **ptr, int max_cols, int max_rows)
{
    int row, col;
    //int max_cols = 4;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", ptr[row][col]);
	}
	printf("\n"); // To format the output. For next row.
    }
}

int main()
{
    int **ra;
    int i, j, n_rows = 3, n_cols = 4;
    int count = 0;

    /* Allocate rows (array of pointers) dynamically */
    ra = (int **) malloc(n_rows * sizeof(int *));

    if (!ra)
    {
    	puts("malloc failed");
    	return 1;
    }

    /* Allocate cols (1D int array) dynamically, for each row */
    for (i = 0; i < n_rows; i++)
    {
    	ra[i] = (int *) malloc(n_cols * sizeof(int));
    }

    /* Store values in 2D array */
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = ++count;
	}
    }

    //Print array
    print_2D_array(ra, n_cols, n_rows);

    // Free cols
    for (i = 0; i < n_rows; i++)
    {
    	if (ra[i] != NULL)
	{
	    free(ra[i]);
	    ra[i] = NULL;
	}
	
    }

    // Free rows
    if (ra != NULL)
    {
    	free(ra);
    	ra = NULL;
    }

}
