#include <stdio.h>
#define Overtime 1.5
#define P_tax1 0.15
#define P_tax2 0.20
#define P_tax3 0.25
#define N_time 40
#define Fst 300
#define Snd 150
#define pay1 8.75
#define pay2 9.33
#define pay3 10
#define pay4 11.20

int main()
{
    float hour, pay, tax, B_pay;
    int i;
    
    while (1)
    {
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr     2) $9.33/hr\n3) $10.00/hr       4) $11.20/hr\n5) quit\n");
        scanf("%d",&i);
        if (i == 1 || i == 2 || i == 3 || i == 4)
        {
            switch (i)
            {
            case '1':
                B_pay = pay1;
                break;
            case '2': B_pay = pay2;
                break;
            case '3': B_pay = pay3;
                break;
            default: B_pay = pay4;
                break;
            }
            printf("Hours worked in a week: "); //request work hours
            scanf("%f", &hour);
    
            if (hour <= N_time) //no overtime pay
                pay = B_pay * hour;
            else
                pay = B_pay * N_time + (hour - N_time) * Overtime * B_pay; //overtime pay

            if (pay <= Fst)
                tax = P_tax1 * pay; //1st tier tax
            else if (pay > Fst && pay <= (Fst + Snd))
                tax = P_tax1 * Fst + P_tax2 * (pay - Snd); //2nd tier tax
            else
                tax = P_tax1 * Fst + P_tax2 * Snd + P_tax3 * (pay - Fst - Snd); //3rd tier tax
    
            printf("Gross pay = %.2f\n", pay); //streaming result
            printf("Tax = %.2f\n", tax);
            printf("Net pay = %.2f\n", pay - tax);
        }
        else if (i == 5)
            break;
        else
            printf("Enter a proper choice.\n");
    }
    return 0;
    }