#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    double j = 0;
    for (int i = 0; i < n; i++)
    {
        j += arr[i];
    }
    double r = (j / n);
    printf("%.12lf\n", r);
    return 0;
}