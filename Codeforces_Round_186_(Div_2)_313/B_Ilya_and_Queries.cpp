#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];
    s[0] = 0;
    scanf("%s", &s[1]);
    int len = strlen(&s[1]);
    int pref_sum[100005];
    pref_sum[1] = 0;
    for (int i = 2; i <= len; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + (s[i - 1] == s[i] ? 1 : 0);
    }
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", pref_sum[r] - pref_sum[l]);
    }
    return 0;
}