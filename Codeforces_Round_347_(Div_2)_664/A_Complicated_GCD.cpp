#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1002];
    scanf("%s %s", s1, s2);
    if (strcmp(s1, s2) == 0)
        printf("%s\n", s1);
    else
        printf("1\n");
    return 0;
}