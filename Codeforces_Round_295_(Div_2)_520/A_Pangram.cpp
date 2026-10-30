#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int ar[26] = {0};
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (a[i] == s[j])
            {
                ar[i] = 1;
                break;
            }
        }
    }
    int f = 0;
    for (int i = 0; i < 26; i++)
    {
        if (ar[i] != 1)
        {
            f = 1;
            break;
        }
    }
    printf((f == 1) ? "NO\n" : "YES\n");
    return 0;
}