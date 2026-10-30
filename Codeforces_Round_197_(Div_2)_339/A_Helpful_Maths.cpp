#include <stdio.h>
#include <string.h>

void sort(int *ar, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = ar[i];
        int j = i - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = key;
    }
}

int main()
{
    char s[105];
    scanf("%s", s);
    int len = strlen(s);

    int tmp[105];
    int j = 0;

    for (int i = 0; i < len; i += 2)
        tmp[j++] = s[i] - '0';

    tmp[j] = '\0';
    sort(tmp, j);

    for (int i = 0; i < j; i++)
    {
        printf("%d", tmp[i]);
        if (i < j - 1)
            printf("+");
    }
    printf("\n");
    return 0;
}