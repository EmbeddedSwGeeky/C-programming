/* FILE - 2_copy_file.c
 * Description - File copy
 */

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    char *dest_file = "/tmp/myhosts.txt";
    int ch; // Store data from file here

    FILE *fsrc, *fdest; //File ptr (Also called as file handle and file stream)

    long pos;
    int write_err = 0;

    // Open the Source file
    fsrc = fopen(filename, "r");

    // Check for error
    if (fsrc == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Open the dest file
    fdest = fopen(dest_file, "w");

    // Check for error
    if (fdest == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_file);
    	return 1;
    }
    // Read and print the file contents

    // Read a char from file
    ch = fgetc(fsrc);
    while (ch != EOF)
    {
    	// Write the char to dest file and check for error (EOF)
    	if (fputc(ch, fdest) == EOF)
	{
	    fprintf(stderr, "ERROR: Unable to write to file %s\n", dest_file);
	    write_err = 1;
	    break;
	}
    	//Read the next char
	ch = fgetc(fsrc);
    }

    if (!write_err && ferror(fsrc)) //Check whether error occured for read
    //if (ferror(fsrc)) //Check whether error occured for read
    {
    	fprintf(stderr, "ERROR: Unable to read file %s\n", filename);
    }

END:
    // Close the file
    fclose(fsrc);
    fclose(fdest);

    return 0;
}
