#include <stdio.h>

int main()
{
    int n = 3;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("I hate it\n");
        return 0;
    }
    printf("I hate that ");
    for (int i = 2; i <= n; i++)
    {
        if (i%2==1)
            printf("I hate ");
        else
            printf("I love ");
        if(i<n) printf("that ");
    }
    printf("it\n");
    return 0;
}