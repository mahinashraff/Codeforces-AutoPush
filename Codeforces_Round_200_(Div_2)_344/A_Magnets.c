#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n];
    for(int i = 0;i<n;i++)
    scanf("%d", &x[i]);
    int cnt = 1;
    for(int i = 0;i<n-1;i++)
    {
        if(x[i] != x[i+1])
        cnt++;
    }
printf("%d\n", cnt);
return 0;
}