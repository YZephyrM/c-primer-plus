#include <stdio.h>

int main()
{
     FILE *fptr;

     fptr = fopen("filename.txt", "w");     //open a file in writing mode

     fprintf(fptr, "Hello World!!");        // write some text to the file

     fclose(fptr);      // close and save in the file

     return 0;
}
