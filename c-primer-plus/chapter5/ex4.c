#include <stdio.h>

int main()
{
    float cm, inch;
    int feet;
    const float ConvCI = 0.3937;
    const float ConvIF = 0.0833;

    printf("Enter a height in cm (<= 0 to quit): _____\b\b\b\b\b");
    scanf("%f", &cm);

    while (cm > 0)
    {
        inch = cm * ConvCI;
        feet = inch * ConvIF;
        inch = inch - feet / ConvIF;

        printf(" %.2f cm = %d feet, %.2f inches\n", cm, feet, inch);

        printf("Enter a height in cm (<= 0 to quit): _____\b\b\b\b\b");
        scanf("%f", &cm);
    }

    printf("Bye!!!!\n");

    return 0;
}