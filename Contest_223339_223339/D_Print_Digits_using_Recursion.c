#include <stdio.h>

void print_digits(int n)
{
    if (n == 0)
        return;
    print_digits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            printf("0");
        } else {
            print_digits(n);
        }
        printf("\n");
    }
    return 0;
}