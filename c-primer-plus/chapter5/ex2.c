#include <stdio.h>

int main(void)
{
    int n, m;

    printf("Insert a integer number:________\b\b\b\b\b\b\b\b");
    scanf("%d", &n);
    m = n;
    printf("%d\n", m);

    while (m++ < (n + 10))
    {
        printf("%d\n", m);
    }

    return 0;
}