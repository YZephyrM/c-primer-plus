#include <stdio.h>

int main()
{
    int up, low;

    printf("Enter lower limit for the table: ");
    scanf("%d", &low);
    printf("Enter upper limit for the table: ");
    scanf("%d", &up);

    printf("\n\ninteger     square     cube\n");
    for(; low <= up; low++)
    {
        printf("%d%12d%11d\n", low, low * low, low * low * low);
    }

    return 0;
}