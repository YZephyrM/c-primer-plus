#include <stdio.h>

int main()
{
    char ch;
    int i = 0;

    while((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            ch = '!';
            putchar(ch);
            i++;
        }
        else if (ch == '!')
        {
            printf("!!");
            i++;
        }
        else
            putchar(ch);
    }

    printf("n. substitution = %d", i);

    return 0;
}