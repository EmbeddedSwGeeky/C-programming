#include <stdio.h>

int main()
{
    int num = 125;
    double pi = 3.142;
    int arr[5] = {1, 2, 3, 4, 5};
    char *filename = "binary_file";

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
    //fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
    fwrite(&num, sizeof(num), 1, fptr);
    fwrite(&pi, sizeof(pi), 1, fptr);
    //fwrite(arr, sizeof(int), 5, fptr);

    fclose(fptr);
}
