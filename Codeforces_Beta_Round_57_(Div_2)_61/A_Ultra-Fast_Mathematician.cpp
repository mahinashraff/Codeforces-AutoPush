#include <stdio.h>
#include <string.h>

int main()
{
    char s1[102], s2[102], res[102];
    scanf("%s[^\n]", s1);
    scanf("%s[^\n]", s2);
    int len = strlen(s1);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[i])
            res[i] = '0';
        else
            res[i] = '1';
    }
    res[len] = '\0';
    printf("%s\n", res);
    return 0;
}