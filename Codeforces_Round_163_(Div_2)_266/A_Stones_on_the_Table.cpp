#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int cnt = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}