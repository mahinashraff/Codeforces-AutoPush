#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *convert(int n)
{
    char *num = malloc(4 * sizeof(char));
    num[0] = '\0';
    int i = 0;
    while (n)
    {
        num[i] = n % 10;
        n /= 10;
        i++;
    }
    num[i] = '\0';
    return num;
}

int check(int n)
{
    char *num = convert(n);
    if ((num[0] == num[1] || num[0] == num[2] || num[0] == num[3]) || (num[1] == num[2] || num[1] == num[3]) || (num[2] == num[3]))
    {
        free(num);
        return 0;
    }
    free(num);
    return 1;
}

int main()
{
    int y;
    scanf(" %d", &y);
    y = y + 1;
    while (!check(y))
    {
        y++;
    }
    printf("%d\n", y);
    return 0;
}