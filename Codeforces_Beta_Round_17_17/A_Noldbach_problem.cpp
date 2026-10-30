#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    static int composite[1001];
    int prime[1001];
    int p = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!composite[i])
        {
            prime[p++] = i;
            for (int j = 2 * i; j <= n; j += i)
            {
                composite[j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i + 1 < p; i++)
    {
        int s = prime[i] + prime[i + 1] + 1;
        if (s <= n && !composite[s])
            cnt++;
    }
    printf("%s\n", (cnt >= k) ? "YES" : "NO");
    return 0;
}