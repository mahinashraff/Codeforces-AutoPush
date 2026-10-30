#include <stdio.h>
// Mahin

int main()
{
    int m, n;
    int dominoes = 0;
    scanf("%d %d", &m, &n);
    if (m * n % 2 == 0 && !(m == 0 || n == 0))
    {
        dominoes = (m * n) / 2;
        printf("%d", dominoes);
    }
    else if (m * n % 2 != 0 && !(m == 0 || n == 0))
    {
        dominoes = (int)(m * n) / 2;
        printf("%d", dominoes);
    }
    return 0;
}