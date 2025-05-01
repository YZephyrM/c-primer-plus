#include <stdio.h>

int main(void)
{
    int f, s, r;
    
    printf("This program computes moduli.\n"); //intro
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &s); //request second operand

    printf("Enter the first operand: ");
    scanf("%d", &f); //request first operand

    r = f % s;
    printf("%d %% %d = %d", f, s, r); //result

    while(f > 0) 
    {
        printf("\nEnter the next first operand(<=0 quit): ");
        scanf("%d", &f);
        r = f % s;
        printf("%d %% %d = %d", f, s, r);
    }

    printf("\nOKAY, nice");

    return 0;
}