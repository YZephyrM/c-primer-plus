#include <stdio.h>

int main()
{
    double first[8], second[8];
    int i;

    for(i = 0; i < 8; i++)
    {
        printf("Enter the %dst/nd/rd/th number: ", i + 1);
        scanf("%lf", &first[i]);
    }

    second[0] = first[0];
    for(i = 1; i < 8; i++)
    {
        second[i] = first[i] + second[i - 1];
    }
    
    for(i = 0; i < 8; i++)
    {
        printf("%10.3lf", first[i]);
    }
    
    printf("\n");

    for(i = 0; i < 8; i++)
    {
        printf("%10.3lf", second[i]);
    }

    printf("\n");
    
    return 0;
}