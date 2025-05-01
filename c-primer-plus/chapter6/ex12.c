#include <stdio.h>

int main()
{
    long double i, counter, diff, sum;

    printf("Enter the limit: ");
    scanf("%Lf", &i);
    
    while(i >= 0)
    {
        for(counter = 2, sum = diff = 1; counter <= i; counter++)
        {
            sum = sum + (1 / counter);

            diff = diff - (1 / counter);
        }

        printf("sum = %.12Lf\n", sum);
        printf("diff = %.12Lf\n", diff);

        printf("Enter the limit: ");
        scanf("%Lf", &i);
    }

    return 0;
}