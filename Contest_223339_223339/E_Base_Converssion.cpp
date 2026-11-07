#include <stdio.h>
void print_binary(int n)
{
    if (n == 0)
        return;
    int rem = n % 2;
    print_binary(n / 2);
    printf("%d", rem);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0\n");
        }
        else
            print_binary(n);
        printf("\n");
    }
    return 0;
}