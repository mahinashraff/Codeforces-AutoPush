#include <stdio.h>
long long count_digits(long long n)
{
    int cnt = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    int len = count_digits(n);
    int cnt = 0;
    for (int i = 1; i <= len; i++)
    {
        if ((n % 10) == 4 || (n % 10) == 7)
        {
            cnt++;
        }
        n /= 10;
    }
    if (cnt == 4 || cnt == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}