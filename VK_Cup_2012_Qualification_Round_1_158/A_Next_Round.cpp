#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != 0 && ar[i] >= ar[k - 1])
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}