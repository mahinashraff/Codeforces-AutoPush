#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        int out, in;
        scanf("%d %d", &out, &in);
        t = t - out + in;
        if (t >= max)
            max = t;
    }
    printf("%d\n", max);
    return 0;
}