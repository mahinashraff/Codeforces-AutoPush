#include <stdio.h>

int check(int x)
{
    int seen = 0;
    while(x)
    {
        int d = x%10;
        if(seen & (1 << d))
        return 0;
        x /= 10;
        seen |= 1 << d;
    }
return 1;
}

int main()
{
    int y;
    scanf("%d", &y);
    while(!check(++y))
    ;
    printf("%d", y);
    return 0;
}