#include <stdio.h>

int main()
{
    int num = 125;
    double pi = 3.142;
    char *filename = "text_file";

    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "w");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    //Write to file
    fprintf(fptr, "%d\n", num);
    fprintf(fptr, "%f\n", pi);

    fclose(fptr);
}
