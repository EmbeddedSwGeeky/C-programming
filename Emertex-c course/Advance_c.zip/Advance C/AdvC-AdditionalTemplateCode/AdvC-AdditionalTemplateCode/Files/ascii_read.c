#include <stdio.h>

int main()
{
    int num;
    double pi;
    char *filename = "text_file";

    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "r");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    //Read from file
    fscanf(fptr, "%d\n", &num);
    fscanf(fptr, "%lf\n", &pi);

    printf("num = %d\n", num);
    printf("pi = %lf\n", pi);

    fclose(fptr);
}
