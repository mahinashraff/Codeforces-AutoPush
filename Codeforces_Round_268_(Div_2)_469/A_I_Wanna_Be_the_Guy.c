#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int has_all(int arr[], int size, int n)
{
    int expected = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == expected)
            expected++;
        else if (arr[i] > expected)
            return 0;
    }
    return expected > n;
}
int main()
{
    int n, p, q;
    scanf("%d", &n);
    scanf("%d", &p);
    int ap[p];
    for (int i = 0; i < p; i++)
        scanf("%d", &ap[i]);
    scanf("%d", &q);
    int aq[q];
    for (int i = 0; i < q; i++)
        scanf("%d", &aq[i]);
    int at[p + q];
    for (int i = 0; i < p; i++)
        at[i] = ap[i];
    for (int i = p; i < p + q; i++)
        at[i] = aq[i - p];
    qsort(at, p + q, sizeof(int), cmp);
    if (has_all(at, p + q, n) && at[p + q - 1] == n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}