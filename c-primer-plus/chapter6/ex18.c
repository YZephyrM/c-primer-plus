#include <stdio.h>

int main()
{
    int friend, i;

    for(friend = 5, i = 1; friend < 150 ; i++)
    {
        friend -= i;
        friend *= 2;
    }

    printf("%d %d", friend, i - 1);

    return 0;
}