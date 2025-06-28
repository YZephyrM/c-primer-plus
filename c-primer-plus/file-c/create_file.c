#include <stdio.h>

int main()
{
     FILE *fptr;

     fptr = fopen("filename.txt", "w");     //create a file

     fclose(fptr);      //close the file

     return 0;
}


/* FILE *fptr;
 * fptr = fopen(filename, mode);
 *
 * _filename_ is the name of the actual file you want to open (or create)
 * _mode_ is a single character, which represents what you want to do with the file:
 * *w* - writes to a file
 * *a* - appends new data to a file
 * *r* - reads from a file 
 * 
 * to create the file in a specific folder, just provide an absolute path (remember to use double backslashes to
 * create a single backslash.
 * e.g.:
 * fptr = fopen("C:\\directoryname\\filename.txt", "w");*/
