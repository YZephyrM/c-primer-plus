#include <stdio.h>

int main()
{
    const float g_l = 3.785;
    const float m_km = 1.609;
    float mile, gallon;

    printf("miles traveld: ");
    scanf("%f", &mile);
    printf("gallons consumed: ");
    scanf("%f", &gallon);

    printf("mpg = %.2f, l/100km = %.2f", mile / gallon, (gallon * g_l) / (mile * m_km));

    return 0;
}