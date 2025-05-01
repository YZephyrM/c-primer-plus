#include <stdio.h>

void Temperatures(double f);

int main(void)
{
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");

    while(scanf("%lf", &fahrenheit) == 1)
    {
        Temperatures(fahrenheit);
        printf("\nPlease enter the next Fahrenheit temperatures('q' to quit): ");
    }
}

void Temperatures(double f)
{
    const double MultFC = 5.00/9.00;
    const double SubFC = 32.00;
    const double AddCK = 273.16;
    double celsius, kelvin;

    celsius = MultFC * (f - SubFC);
    kelvin = celsius + AddCK;

    printf("%.2lf Fahrenheit = %.2lf Celsius = %.2lf Kelvin", f, celsius, kelvin);
}