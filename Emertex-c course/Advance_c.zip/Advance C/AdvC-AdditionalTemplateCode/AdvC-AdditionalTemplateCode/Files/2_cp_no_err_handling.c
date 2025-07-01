/* FILE - 2_copy_file.c
 * Description - File copy
 */

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    char *dest_file = "myhosts.txt";
    int ch; // Store data from file here

    FILE *fsrc, *fdest; //File ptr (Also called as file handle and file stream)

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

    // Read a char from file
    while ((ch = fgetc(fsrc)) != EOF)
    {
    	// Write the char to dest file
    	fputc(ch, fdest);
    }

    // Close the files
    fclose(fsrc);
    fclose(fdest);

    return 0;
}
