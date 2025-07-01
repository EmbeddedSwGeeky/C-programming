/* FILE - 1_read_and_print.c
 * Description - Reads chars from file and prints it to stdout
 */

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    int ch; // Store data from file here

    FILE *fptr; //File ptr (Also called as file handle)

    long pos;

    // Open the file
    fptr = fopen(filename, "r");

    // Check for error
    if (fptr == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %ld\n", pos);

    // Read and print the file contents

    // Read a char from file
    ch = fgetc(fptr);
    while (ch != EOF)
    {
    	// Print the char to stdout
    	putchar(ch);
    	//Read the next char
	ch = fgetc(fptr);
    }

    pos = ftell(fptr);
    printf("pos = %ld\n", pos);

    // Close the file
    fclose(fptr);

    return 0;
}
