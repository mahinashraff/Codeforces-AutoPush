#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Mahin

int main()
{
    char s1[105], s2[105];
    scanf("%100s", s1);
    scanf("%100s", s2);
    int n = strcasecmp(s1, s2);

    if (n < 0)
    {
        printf("-1\n");
    }
    else if (n > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}