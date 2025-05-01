#include <stdio.h>

int main()
{
    char name[20];
    float cm;

    printf("Name: __________\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%s", name);
    printf("height in cm: __________\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &cm);

    printf("%s, you are %.2f meters tall.\n", name, cm/100);

    return 0;
}