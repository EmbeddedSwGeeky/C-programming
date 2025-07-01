

/* FILE: 2D_array_passing.c  */
#include <stdio.h>

#define MAX_ROWS 2
#define MAX_COLS 3

void print_2D_array(int *ptr, int rows, int cols);

void print_2D_array(int *ptr, int rows, int cols)
{
    int i, j;
    // Print matrix
    for (i = 0; i < rows; i++)
    {
	for (j = 0; j < cols; j++)
	{
	    printf("%5d", *(ptr + (i * cols) + j));
	}
	puts("");
    }
}

int main()
{
    // Initialize 2D array row-wise
    int arr[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}};

    print_2D_array((int *)arr, MAX_ROWS, MAX_COLS);

}
