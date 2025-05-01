#include <stdio.h>

void print(int i);

int main()
{
    int n;

    for(n = 0; n < 5; n ++)
    {
        print(n);

        printf("\n");
    }

}

void print(int i)
{
    for(; i >= 0; i--)
    {
        printf("$");
    }
}