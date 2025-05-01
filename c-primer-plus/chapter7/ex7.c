#include <stdio.h>
#define B_pay 10
#define Overtime 1.5
#define P_tax1 0.15
#define P_tax2 0.20
#define P_tax3 0.25
#define N_time 40
#define Fst 300
#define Snd 150

int main()
{
    float hour, pay, tax;

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

    return 0;
    }