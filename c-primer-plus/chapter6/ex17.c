#include <stdio.h>

int main()
{
    const float bank = 1000000;
    const float interest = 0.08;
    const float withdraw = 100000;
    int i;
    float money;

    for(i = 0, money = bank; money > 0; i++)
    {
        money += interest * money - withdraw;
        printf("%.2f\n", money);
    }

    printf("Chuckie takes %d years to empty his account.\n", i);

    return 0;
}