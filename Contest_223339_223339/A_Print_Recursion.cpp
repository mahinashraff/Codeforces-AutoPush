#include <stdio.h>
void print(int a)
{
    if (a < 1)
        return;
    printf("I love Recursion\n");
    print(a - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}