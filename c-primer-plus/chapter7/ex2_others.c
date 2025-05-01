#include <stdio.h>

int main()
{
    const int ppl = 8;
    char ch;
    int count = 0;

    printf("Enter smth:\n");
    while ((ch = getchar()) != '#')
    {
        count++;
        printf("%c-%3d ", ch, ch);

        if(count % ppl == 0)
            printf("\n");

        if (ch == '\n')
        {
            printf("\n");
        }
    }

    return 0;
}