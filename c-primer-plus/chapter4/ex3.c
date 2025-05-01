#include <stdio.h>

int main()
{
    float num1;
    float num2;

    printf("Number 1:__________\b\b\b\b\b\b\b\b\b\b");
    scanf("%e", &num1);
    printf("NUmber 2:__________\b\b\b\b\b\b\b\b\b\b");
    scanf("%e", &num2);

    printf("Nummber1 dec:%f, exp:%e", num1, num1);
    printf("\nNummber2 dec:%f, exp:%e", num2, num2);

    return 0;
}