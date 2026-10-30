#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);

        int R = 1;
        for (int i = 1; i < n; i++)
        {
            if (str[i] != str[i - 1])
                R++;
        }

        int maxReduction = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int red;
            if (str[i] == str[i - 1] || str[i] == str[i + 1])
            {
                red = 0;
            }
            else if (str[i - 1] == str[i + 1])
            {
                red = 2;
            }
            else
            {
                red = 1;
            }
            if (red > maxReduction)
                maxReduction = red;
        }

        printf("%d\n", R - maxReduction);
    }

    return 0;
}