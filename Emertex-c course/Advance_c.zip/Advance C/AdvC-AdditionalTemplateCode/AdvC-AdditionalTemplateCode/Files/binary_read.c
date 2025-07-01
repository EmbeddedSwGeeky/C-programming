#include <stdio.h>

int main()
{
    int num;
    double pi;
    int arr[5];
    char *filename = "binary_file";

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
    //fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    fread(&num, sizeof(num), 1, fptr);
    fread(&pi, sizeof(pi), 1, fptr);
    //fread(arr, sizeof(int), 5, fptr);

    printf("num = %d\n", num);
    printf("pi = %f\n", pi);

    fclose(fptr);
}
