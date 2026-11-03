#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            if(a % b == 0)
            {
                printf("0\n");
                continue;
            }
            int cnt = 0;
            int x = a / b + 1;
            int step = x * b - a;
            printf("%d\n", step);
        }
        else
        {
            printf("%d\n", b - a);
        }
    }
    return 0;
}