#include <stdio.h>

int main()
{
    int avg_e = 0, avg_o = 0, e = 0, o =0, i;

    printf("Enter some numbers, enter 0 to quit:\n");

    while ((scanf("%d", &i)) != '0' && i != 0)
    {
        if (i % 2 == 0)
        {
            e++;
            avg_e += i;
        }

        else
        {
            o++;
            avg_o += i;
        }
    }
    printf("The total number of even integer entered is %d.\n", avg_e);
    printf("The average value of the even integers is %d.\n", avg_e / e);
    printf("The total number of even integer entered is %d.\n", avg_o);
    printf("The average value of the even integers is %d.\n", avg_o / o);
}