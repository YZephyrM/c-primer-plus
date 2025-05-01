#include <stdio.h>

int main()
{
    const int Conv_M_H = 60;
    int h, m;

    printf("minute = _____\b\b\b\b\b");
    scanf("%d", &m);

    while (m < 0)
    {
        printf("Error value. Please re-insert minutes value");
        scanf("%d", &m);
    }

    h = m / Conv_M_H;
    m = m - h * Conv_M_H;
    printf("hour = %d, min = %d\n", h, m);

    return 0;
}