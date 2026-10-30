#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", abs(x - 2) + abs(y - 2));
    return 0;
}