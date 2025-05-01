#include <stdio.h>

int main()
{
    int limits[2], a, b, sum;

    printf("Enter  lower and upper limits: ");
    scanf("%d %d", &limits[0], &limits[1]);

    while(limits[1] != limits[0])
    {
        for(sum = 0, a = limits[0], b = limits[1]; limits[0] <= limits[1]; limits[0]++)
        {
            sum = sum + limits[0] * limits[0];
        }

        printf("The sum of the squares from %d to %d is %d.\n", a, b, sum);

        printf("Enter next set of limits: ");
        scanf("%d %d", &limits[0], &limits[1]);
    }

    printf("Done!!!");

    return 0;
}