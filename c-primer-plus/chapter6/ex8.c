#include <stdio.h>

int main()
{
    double n1, n2;
    int status1, status2;

    printf("Enter a first floating-point number: ");
    status1 = scanf("%lf", &n1);
    printf("Enter a second floating-point number: ");
    status2 = scanf("%lf", &n2);

    while( status1 + status2 == 2)
    {
        printf("%lf\n", (n1 - n2) / (n1 * n2));

        printf("Enter a first floating-point number: ");
        status1 = scanf("%lf", &n1);
        printf("Enter a second floating-point number: ");
        status2 = scanf("%lf", &n2);
    }
}