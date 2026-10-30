#include <stdio.h>
// Mahin

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int price = 0;
    for (int i = 1; i <= w; i++)
    {
        price += k * i;
    }
    if (price > n)
    {
        printf("%d\n", price - n);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}