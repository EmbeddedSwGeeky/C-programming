#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*ra)[3]; // Pointer to an array of 3 ints (Colums fixed)
    int i, j, n_rows = 5, n_cols = 3, k = 1;

    /* Allocate whole array dynamically */
    ra = (int (*)[3]) malloc(n_rows * sizeof(int [3]));
    //ra = (int (*)[3]) malloc(n_cols * n_rows * sizeof(int));

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
    // Free entire 2d array
    if (ra != NULL)
    {
	free(ra);
	ra = NULL;
    }
	

}







