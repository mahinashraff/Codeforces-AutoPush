#include <stdio.h>

int sort(int ar[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ar[j + 1] < ar[j])
            {
                int tmp = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = tmp;
            }
        }
    }
}

int main()
{
    int ar[4];
    scanf("%d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3]);
    sort(ar, 4);
    if (ar[0] + ar[1] > ar[2] || ar[1] + ar[2] > ar[3])
    {
        printf("TRIANGLE\n");
    }
    else if (ar[0] + ar[1] == ar[2] || ar[1] + ar[2] == ar[3])
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}