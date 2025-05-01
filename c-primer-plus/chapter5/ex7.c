#include <stdio.h>

void cube(int n);

int main(void)
{
    int number;

    printf("number = ");
    scanf("%d", &number);

    cube(number);

    return 0;
}

void cube(n)
{
    int n_c = n * n * n;
    printf("%d^3 = %d ", n, n_c); 
}