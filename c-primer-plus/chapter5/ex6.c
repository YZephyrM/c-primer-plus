#include <stdio.h>

int main(void)
{
    long long n;
    int m, sum;
    n = sum = 0;

    printf("How many integers do you need for the sum? ");
    scanf("%d", &m);

    while(n++ < m)
    sum = n * n + sum;

    printf("sum = %d\n", sum);

    return 0;
}
