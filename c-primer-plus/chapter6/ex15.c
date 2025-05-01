#include <stdio.h>

int main()
{
    char input[255];
    int i;

    printf("Enter some characters: ");

    for(i = 0; input[i - 1] != '\n'; i++) //!!!!newline character ( \n) is generated when you press the Enter key
    {
        scanf("%c", &input[i]);
    }

    while(i >= 2)
    {
        printf("%c", input[i - 2]);
        i--;
    }

    return 0;
}