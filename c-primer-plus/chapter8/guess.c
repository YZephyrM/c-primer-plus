#include <stdio.h>
int main()
{
     int guess = 1;

     printf("Pick an integer from 1 to 100. I will try to guess ");
     printf("it.\n Respond with a y if my guess is right and with");
     printf("\nan n if it is wrong.\n");
     printf("Uh...is your number %d?\n", guess);
     while (getchar() != 'y')
         printf("Well, then, is it %d\n", ++guess);
     printf("I knew I could do it!\n");

    return 0;     
}
