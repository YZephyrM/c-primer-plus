#include <stdio.h>

int main()
{
    const float C1 = 15.0 / 100.0;
    const float C2 = 28.0 / 100.0;
    const int S1 = 17850;
    const int H2 = 23900;
    const int M3 = 29750;
    const int M4 = 14875;
    int category, amount_max;
    float income, tax;

    printf("Here are all the tax categories:\n");
    printf("1)SINGLE\n");
    printf("2)HEAD OF HOUSEHOLD\n");
    printf("3)MARRIED, JOINT\n");
    printf("4)MARRIED, SEPARATE\n");

    printf("Choose your category 1--4('5' to end the loop) :");
    scanf("%d", &category);
    while (category != 5)
    {
        printf("Enter your income: ");
        scanf("%f", &income);

        switch (category)
        {
            case 1:
                amount_max = S1;
                break;
            case 2:
                amount_max = H2;
                break;
            case 3:
                amount_max = M3;
                break;
            case 4:
                amount_max = M4;
                break;
        }

        if (income > amount_max)
            tax = amount_max * C1 + (income - amount_max) * C2;
        else
            tax  = income * C1;

        printf("Tax = %.2f$\n", tax);

        printf("Choose your category 1--4('5' to end the loop) :");
        scanf("%d", &category);
    }
    return 0;
}