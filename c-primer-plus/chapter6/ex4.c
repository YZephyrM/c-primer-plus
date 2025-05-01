#include <stdio.h>

char print(int n, char q);

int main()
{
    int i;
    char ch;

    for(i = 0, ch = 'A'; i < 6; i++)
    {
        ch = print(i, ch);
        printf("\n");
    }
    
    return 0;
}

char print(int n, char q)
{
    for(;n >= 0; n--, q++)
    {
        printf("%c", q);
    }

    return q;
}