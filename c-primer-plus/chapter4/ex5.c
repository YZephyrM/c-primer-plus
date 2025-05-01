#include <stdio.h>

int main()
{
    float d_speed;
    float size;
    float time;

    printf("speed(Mbs): ");
    scanf("%f", &d_speed);
    printf("size(MB): ");
    scanf("%f", &size);
    time = size / (d_speed/8);

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.", d_speed, size, time);

    return 0;
}