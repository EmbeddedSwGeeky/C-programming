#include <stdio.h>

//void print_2D_array(int max_rows, int max_cols, int ptr[][max_cols]); // Prototype
//void print_2D_array(int max_rows, int max_cols, int (*ptr)[max_cols])

//void print_2D_array(int (*ptr)[4], int max_rows);

//void print_2D_array(int (*ptr)[4], int max_rows)
void print_2D_array(int ptr[][4], int max_rows)
{
    int row, col;
    int max_cols = 4;

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
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int max_rows = 3, max_cols = 4;

    print_2D_array(matrix, max_rows);
    //print_2D_array(max_rows, max_cols, matrix);

    return 0;
}
