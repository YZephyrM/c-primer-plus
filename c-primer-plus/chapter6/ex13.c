#include <stdio.h>

int main()
{
    int pwr[8], i, counter = 0;

    for(i = 1, pwr[0] = 1; i < 8; i++)
    {
        pwr[i] = pwr[i - 1] * 2;
    }

    do
    {
        printf("%d ", pwr[i - 1]);
        i--;
    }while(i >= 1);

    printf("\n");

    do
    {
        printf("%d ", pwr[counter]);
        counter++;       
    }while(counter < 8);

    return 0;
}