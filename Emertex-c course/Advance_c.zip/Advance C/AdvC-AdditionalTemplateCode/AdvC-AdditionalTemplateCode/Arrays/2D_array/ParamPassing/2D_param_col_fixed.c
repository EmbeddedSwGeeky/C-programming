#include <stdio.h>

void print_2D_array(int max_rows, int max_cols, int arr[][max_cols])
{
    int row, col;

    printf("Sizeoff arr = %u\n", sizeof(arr));
    printf("Sizeoff arr = %u\n", sizeof(*arr));

    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", arr[row][col]);
	    //printf("%4d", *(*(arr + row) + col) );
	}
	printf("\n"); // To format the output. For next row.
    }
}

int main()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int max_rows = 3, max_cols = 4;

    printf("Printing the 2D Array\n");
    print_2D_array(max_rows, max_cols, matrix);

    return 0;
}
