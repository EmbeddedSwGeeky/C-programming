/* FILE - 1_read_and_print.c
 * Description - Reads chars from file and prints it to stdout
 */

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    int ch;
    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "r");

    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Read and print the file contents
    ch = fgetc(fptr); //fgetc reads 1 byte from file. It returns EOF if no more data is available
    while (ch != EOF)
    {
    	// Print the char to stdout
    	putchar(ch);
    	//Read the next char
	ch = fgetc(fptr);
    }

    // Close the file
    fclose(fptr);

    return 0;
}
