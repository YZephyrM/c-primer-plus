#include <stdio.h>

int isPrime(int n);
int main()
{
    int i, o = 2;

    printf("Enter a positive integer: ");
    while ((scanf("%d", &i)) != 1 || i < 1)
    {
        while (getchar() != '\n');
        printf("Enter a positive integer: ");
    }

    printf("The prime numbers smaller or equal to %d are:\n", i);
    while (o <= i)
    {
        if (isPrime(o))
            printf("%d ", o);
        o++;
    }

    return 0;
}

int isPrime(int n)
{
    int j;

    for (j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
            return 0;
    }
    return 1;
}