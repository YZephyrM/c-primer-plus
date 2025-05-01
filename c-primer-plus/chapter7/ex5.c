#include <stdio.h>

int main()
{
    char ch;
    int i;

    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            ch = '!';
            putchar(ch);
            i++;
            break;
        case '!':
            printf("!!");
            i++;
            break;
        default:
            putchar(ch);
            break;
        }

    }

    printf("n.substitution = %d", i);

    return 0;
}