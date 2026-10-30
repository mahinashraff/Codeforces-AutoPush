#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n], z[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    int xs = 0, ys = 0, zs = 0;
    for (int i = 0; i < n; i++)
    {
        xs += x[i];
        ys += y[i];
        zs += z[i];
    }
    if (xs == 0 && ys == 0 && zs == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}