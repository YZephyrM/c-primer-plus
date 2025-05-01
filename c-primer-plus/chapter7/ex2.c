//Write a program that reads input until encountering #. Have the program print each 
//input character and its ASCII decimal code. Print eight character-code pairs per line.

#include <stdio.h>

int main()
{
    int counter = 0;
    char ch;

    printf("Enter something and I'll give its ASCII decimal code.\n");
    while ((ch = getchar()) != '#')
    {
        if  (counter < 8)
        {
            printf("%c%10d", ch, ch);
            counter++;
        }
        else
        {
            counter = 0;
            printf("\n");
        }
        if (ch == '\n')
        {
            printf("\n");
        }
    }

    return 0;
}