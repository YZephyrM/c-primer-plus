#include <stdio.h>

int main()
{
     FILE *fptr;
     
     fptr = fopen("filename.txt","a");
     fprintf(fptr, "\nI hate everybody!!!!");

     fclose(fptr);

     return 0;
}
