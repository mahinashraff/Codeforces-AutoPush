#include <stdio.h>
void string_copy(char *a, char *b)
{
    int len = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
        len++;
    }
    a[len] = '\0';
    return;
}
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char s[n + 1];
    scanf("%s", s);
    for (int i = 1; i <= t; i++)
    {
        char p[n + 1];
        string_copy(p, s);
        for (int i = 0; i < n; i++)
        {
            if (p[i + 1] == 'G' && p[i] == 'B')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
            }
        }
    }
    printf("%s\n", s);
    return 0;
}