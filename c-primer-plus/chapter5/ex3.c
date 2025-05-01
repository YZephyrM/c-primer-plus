#include <stdio.h>

int main(void)
{
    int t_day, day, week;
    const int Conv_D_W = 7;
    printf("Insert total days number:_____\b\b\b\b\b");
    scanf("%d", &t_day);

    while(t_day < 1){
        printf("Please insert a integer number:_____\b\b\b\b\b");
        scanf("%d", &t_day);
    }

    week = t_day / Conv_D_W;
    day = t_day - week * Conv_D_W;

    printf("%d days are %d weeks, %d days.\n", t_day, week, day);

    return 0;
}