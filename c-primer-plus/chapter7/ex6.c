#include <stdio.h>

int main()
{
    int flag = 0, count = 0;
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
            flag = 1;
        else if(ch == 'i' && flag == 1)
        {
            count++;
            flag = 0;
        }
        else
            flag = 0;
    }

    printf("There are %d times of the sequence 'ei'", count);

    return 0;
}