#include <stdio.h>
// Mahin

int main()
{
    int n;
    scanf("%d", &n);
    int p[n], q[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i], &q[i]);
    }
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        if (q[i] - p[i] >= 2)
        {
            r++;
        }
    }
    printf("%d\n", r);
    return 0;
}