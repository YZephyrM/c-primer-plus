#include <stdio.h>

void print(int n);
void space(int n);

int main()
{
    int i;
    int random;
    
    printf("Enter a integer number: ");
    scanf("%d", &random);
    
    for(i = 0; i <= random; i++)
    {
        space(random - i);
        print(i);
        printf("\n");
    }
    return 0;
}

void print(int n)
{
    int count;
    char ch;

    for(ch = 'A', count = n - 1; n > 0; n--, ch++)
    {
        printf("%c", ch);
    }
    
    for(ch = ch - 1; count > 0; count--)
    {
        ch--;
        printf("%c", ch);
    }
}

void space(int n)
{
    while(n > 0)
    {
        printf(" ");
        n--;
    }
}