#include <stdio.h>
#include <string.h>

int main()
{
    char word[30];
    int length;

    printf("Enter a single word: ");
    scanf("%s", word);
    length = strlen(word);

    while(length-- >= 0)
    {
        printf("%c\n", word[length]);
    }

    return 0;
}