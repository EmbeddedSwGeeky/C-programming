
/* Both row and colum size fixed */
void print_2D_array(int ptr[3][4]);

/*Fixed column size */
void print_2D_array(int (*ptr)[4], int max_rows);
void print_2D_array(int ptr[][4], int max_rows);

/* Variable row and col size */
void print_2D_array(int max_rows, int max_cols, int (*ptr)[max_cols]); // Prototype
void print_2D_array(int max_rows, int max_cols, int ptr[max_rows][max_cols]); // Prototype
void print_2D_array(int max_rows, int max_cols, int ptr[][max_cols]); // Prototype

