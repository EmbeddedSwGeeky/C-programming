#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ra[5]; //Number of rows is fixed (5)
    int i, j, n_rows = 5, n_cols = 3, k = 1;

    /* Allocate each row dynamically. ie., Array of integers */
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

}







