#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[105];
    scanf("%s", s1);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = tolower(s1[i]);
    }
    char s2[] = "aeiouy";
    int seen[256] = {0};
    for (int i = 0; s2[i] != '\0'; i++)
    {
        seen[(unsigned char)s2[i]] = 1;
    }
    int k = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (!seen[(unsigned char)s1[i]])
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
    char result[210];
    char targets[] = "bcdfghjklmnpqrstvwxz";
    int p = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (strchr(targets, s1[i]) != NULL)
        {
            result[p++] = '.';
        }
        result[p++] = s1[i];
    }
    result[p] = '\0';
    printf("%s\n", result);
    return 0;
}