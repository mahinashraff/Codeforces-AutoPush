#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int len = sizeof(ar) / sizeof(ar[0]);
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (n % ar[i] == 0)
        {
            flag = 1;
        }
    }
    printf(flag ? "YES\n" : "NO\n");
    return 0;
}