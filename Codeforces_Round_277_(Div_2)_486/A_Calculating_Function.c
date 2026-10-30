#include <stdio.h>
#define LL long long

int main()
{
    LL n, sum;
    scanf("%lld", &n);
    sum = (n % 2 == 0) ? n / 2 : -(n + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}