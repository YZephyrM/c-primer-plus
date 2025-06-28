#include <stdio.h>

int main()
{
     FILE *fptr;
     char string[200];

     fptr = fopen("filename.txt", "r");

     while(fgets(string, 200, fptr))
         printf("%s", string);

     fclose(fptr);

     return 0;
}

/* The _fgets_ function only reads the first line of the file.
 * to read every line of the file, you can use a loop.*/
