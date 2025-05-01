#include <stdio.h>

int main(void)
{
    int y = 2, n = 3;
    int num1, num2;

    num1 = (y + n++) * 6;
    num2 = (y + +n) * 6;

    printf("%1d %5d\n", num1, num2);
    return 0;
}