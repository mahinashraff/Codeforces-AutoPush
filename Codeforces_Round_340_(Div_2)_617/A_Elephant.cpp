#include <stdio.h>
// Mahin

int main()
{
    int x;
    scanf("%d", &x);
    int steps = 0;
    int rem = 0;
    for (int i = 5; i; i--)
    {
        steps += x / i;
        rem = x % i;
        if (rem == 0)
            break;
        x = rem;
    }
    printf("%d\n", steps);

    return 0;
}