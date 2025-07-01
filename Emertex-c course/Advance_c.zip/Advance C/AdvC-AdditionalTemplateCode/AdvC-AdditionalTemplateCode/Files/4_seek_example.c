#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main()
{
    FILE *fptr = NULL;
    char *filename = "/etc/services";
    char buf[SIZE];
    long pos;

    // Open the file
    fptr = fopen(filename, "r");

    // Check for error
    if (fptr == NULL) {
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %lu\n", pos); // Should be 0

    fgets(buf, sizeof(buf), fptr);
    puts(buf);

    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %lu\n", pos); // Should be equal to the len of line 1

    fseek(fptr, 0L, SEEK_END); // Goto EOF
    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %lu\n", pos); // Should be equal to size of file

    fseek(fptr, 0L, SEEK_SET); // Goto beginning of rule
    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos (offset = 0L, whence = SEEK_SET) = %lu\n", pos); // Should be 0

    fclose(fptr);
    return 0;

}
