#include <stdio.h>
#include <stdlib.h>

void print_2D_array(int **arr, int max_rows, int max_cols);
int main()
{
    int **ra;
    int i, j, n_rows = 5, n_cols = 3, k = 1;

    /* Allocate rows (array of pointers) dynamically */
    ra = (int **) malloc(n_rows * sizeof(int *));

    /* Allocate cols (1D int array) dynamically, for each row */
    for (i = 0; i < n_rows; i++)
    {
    	ra[i] = (int *) malloc(n_cols * sizeof(int));
    }
    /* Access the 2D array */
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = k++;
	}
    }


    //Print array
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    printf("%4d", ra[i][j]);
	}
	printf("\n");
    }
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







