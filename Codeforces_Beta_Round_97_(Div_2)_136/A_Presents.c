#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
        scanf("%d", &ar[i]);
    int res[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int tmp = ar[i];
        res[tmp] = i;
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", res[i]);
    return 0;
}