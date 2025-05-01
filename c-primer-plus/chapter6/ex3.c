#include <stdio.h>

void print(int n);

int main()
{
    int i;

    for(i = 0; i < 6; i++)
    {
        print(i);
        
        printf("\n");
    }

}

void print(int n)
{
    int m;
    char ch;

    for(m = 0, ch = 'F'; n >= 0; n--, m++)
    {
        printf("%c", (ch - m));
    }
}