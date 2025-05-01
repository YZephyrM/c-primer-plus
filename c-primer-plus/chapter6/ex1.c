#include <stdio.h>

int main()
{
    char ch[26];
    int index;

    for(index = 0, ch[0] = 'A'; index < 26 ; index++)
    {
        printf("%c", ch[index]);
        ch[index + 1] = ch[index] + 1;
    }

    return 0;
}