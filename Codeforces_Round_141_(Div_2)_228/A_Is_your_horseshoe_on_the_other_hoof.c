#include <stdio.h>

int main()
{
    int n[4];
    for (int i = 0; i < 4; i++)
        scanf("%d", &n[i]);
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (n[i] == n[j])
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}