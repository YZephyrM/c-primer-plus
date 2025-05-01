#include <stdio.h>
int main()
{
    char last[20];
    char first[20];

    printf("What's your first name?\n"); //first name
    scanf("%s", first);
    printf("What's your last name?\n"); //last name
    scanf("%s", last);

    printf("%s %s\n", first, last);
    return 0;
}