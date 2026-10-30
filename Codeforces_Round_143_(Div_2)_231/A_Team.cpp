#include <stdio.h>

int main()
{
    int n, p, v, t;
    int count = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &p, &v, &t);
        if ((p == 1 && v == 1) || (v == 1 && t == 1) || (p == 1 && t == 1))
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}