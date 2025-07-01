/* FILE - 3_text_vs_binary_save.c
 * Description - Save data in text and binary formats to files
 */

#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[30];
    int age;
    float avg_marks;
} StudInfo;

int save_stud_info_as_text(StudInfo *stud_ptr, FILE *fptr);
int save_stud_info_as_binary(StudInfo *stud_ptr, FILE *fptr);

// Save stud info to a file in binary format
int save_stud_info_as_binary(StudInfo *sptr, FILE *fptr)
{
    //Write whole structure to file
    //Write individual fields
    fwrite(&(sptr->id), sizeof(sptr->id), 1, fptr);
    fwrite((sptr->name), sizeof(char), strlen(sptr->name) + 1, fptr); //Store the string
    // Above line can be done using fputs (preferred)
    fwrite(&(sptr->age), sizeof(sptr->age), 1, fptr);
    fwrite(&(sptr->avg_marks), sizeof(sptr->avg_marks), 1, fptr);
    fflush(fptr);

}
// Save stud info to a file in text format
int save_stud_info_as_text(StudInfo *sptr, FILE *fptr)
{
    //printf("%d\n%s\n%d\n%f\n", sptr->id, sptr->name, sptr->age, sptr->avg_marks);
    fprintf(fptr, "%d\n%s\n%d\n%f\n", sptr->id, sptr->name, sptr->age, sptr->avg_marks);
    //Write fields to file
    //fflush(fptr);

}

int main()
{
    StudInfo stud = {100000, "Mubeen", 337654, 70123.54566f};

    char *dest_text_file = "biodata.txt";
    char *dest_bin_file = "biodata.dat";
    FILE *fdest1, *fdest2; //File ptr (Also called as file handle)

    // Open the dest file
    fdest1 = fopen(dest_text_file, "w");

    // Check for error
    if (fdest1 == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_text_file);
    	return 1;
    }

    // Open the dest file
    fdest2 = fopen(dest_bin_file, "w");

    // Check for error
    if (fdest2 == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_bin_file);
    	return 1;
    }
    // Write stud info to file
    save_stud_info_as_text(&stud, fdest1);

    save_stud_info_as_binary(&stud, fdest2);



END:
    // Close the file
    fclose(fdest1);
    fclose(fdest2);

    return 0;
}
