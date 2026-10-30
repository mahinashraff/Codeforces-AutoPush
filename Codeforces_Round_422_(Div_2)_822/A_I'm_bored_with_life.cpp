#include <stdio.h>
#define ll long long

ll fact(int);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int min = a < b ? a : b;
    printf("%lld\n", fact(min));
    return 0;
}

ll fact(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}