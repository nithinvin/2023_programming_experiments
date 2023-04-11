#include <stdio.h>

int main()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "Some text\n");
 
    // Close the file
    fclose(fptr);
}
