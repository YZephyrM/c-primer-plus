#include <stdio.h>

int main()
{
    char name[20];
    printf("What's your name?\n");
    scanf("%s", name);

    printf("\"%s\"", name);

    printf("\n\"%20s\"", name);

    printf("\n\"%-20s\"", name);

     printf("\n\"%s   \"", name);
    return 0;
}