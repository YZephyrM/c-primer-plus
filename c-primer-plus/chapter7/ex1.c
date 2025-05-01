#include <stdio.h>

int main()
{
    int space = 0, newline = 0, counter = 0;
    char ch;

    printf("Enter something, enter '#' to quit:\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case ' ':
                space++;
                break;
            case '\n':
                newline++;
                break;
            default:
             counter++;
             break;
        }
    }
    printf("Nunmber space = %d, number newline = %d, number other character = %d ", space, newline, counter);

    return 0;
}
