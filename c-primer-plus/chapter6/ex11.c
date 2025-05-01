#include <stdio.h>

int main()
{
    int n[8], i;

    printf("Enter 8 integers...\n");

    for(i = 0; i < 8; i++)
    {
        printf("%d = ", i);
        scanf("%d", &n[i]);
    }

    for(i = 7; i >= 0; i--)
    {
        printf("%d ", n[i]);
    }

    return 0;
}