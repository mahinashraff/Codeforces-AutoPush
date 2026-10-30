#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], t[101];
    scanf(" %s", s);
    scanf(" %s", t);
    int len = strlen(t);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char rev = t[i];
        t[i] = t[j];
        t[j] = rev;
    }
    if (strcmp(s, t) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}