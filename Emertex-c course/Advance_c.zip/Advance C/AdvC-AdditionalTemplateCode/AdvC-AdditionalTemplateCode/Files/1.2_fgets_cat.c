/* FILE - 1.2_fgets_cat.c
 * Description - Reads chars from file using fgets and prints it to stdout
 */

#include <stdio.h>

#define BUF_SIZE 1024

int main()
{
    char *filename = "/etc/hosts";
    char buf[BUF_SIZE]; // Store data from file here
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
    while (fgets(buf, sizeof(buf), fptr) != NULL)
    {
    	// Print the buf to stdout
	printf("%s", buf);
    }

    //Check for error
    if (feof(fptr))
    {
	printf("EOF occured\n");
    }

    //Check for error
    if (ferror(fptr))
    {
	fprintf(stderr, "Failed to read from file %s\n", filename);
	return 1;
    }

    // Close the file
    fclose(fptr);

    return 0;
}
