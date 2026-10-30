#include <stdio.h>

void sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    sort(ar, n);
    int t_sum = 0;
    for (int i = 0; i < n; i++)
    {
        t_sum += ar[i];
    }
    float h = t_sum / 2;
    int cnt = 0, n_sum = 0;
    int i = 0;
    while (n_sum <= h)
    {
        n_sum += ar[i];
        i++;
        cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}