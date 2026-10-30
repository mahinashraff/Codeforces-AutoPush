#include <stdio.h>

int main()
{
    int l, b;
    scanf("%d %d", &l, &b);
    int time = 0;

    if (l == b)
    {
        time = 1;
        // continue;;
    }

    while (l < b)
    {
        l *= 3;
        b *= 2;
        time++;
        if (l == b)
        {
            time += 1;
        }
    }

    // printf("l: %d b: %d\n", l, b);
    printf("%d\n", time);

    return 0;
}