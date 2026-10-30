#include <stdio.h>

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int wid = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > h)
        {
            wid += 2;
        }
        else
        {
            wid += 1;
        }
    }
    printf("%d\n", wid);
    return 0;
}