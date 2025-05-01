#include <stdio.h>
#include <string.h>

int main()
{
    char name1[20] = "Melissa";
    char name2[20] = "Honeybee";
    int len1 = strlen(name1);
    int len2 = strlen(name2);

    printf("%10s %10s\n%10d %10d\n", name1, name2, len1, len2);
    printf("%-10s %-10s\n%-10d %-10d\n", name1, name2, len1, len2);
    return 0;
}