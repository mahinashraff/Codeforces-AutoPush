#include <stdio.h>

void sort(int a[], int b[], int l)
{
    for (int i = 1; i < l; i++)
    {
        int j = i - 1;
        int k1 = a[i], k2 = b[i];
        while (j >= 0 && a[j] > k1)
        {
            a[j + 1] = a[j];
            b[j + 1] = b[j];
            j--;
        }
        a[j + 1] = k1;
        b[j + 1] = k2;
    }
}

int main()
{
    int s, n;
    scanf("%d %d", &s, &n);
    int d[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &d[i], &b[i]);
    }
    sort(d, b, n);
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        if (s > d[i])
            s += b[i];
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}