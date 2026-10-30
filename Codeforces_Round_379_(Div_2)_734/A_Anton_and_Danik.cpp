#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    // snprintf(s, sizeof(s), "%%%ds", n);
    // scanf(s, str);
    // printf("%s", s);
    scanf("%s", s);
    int a = 0, d = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        printf("Anton\n");
    }
    else if (d > a)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;
}