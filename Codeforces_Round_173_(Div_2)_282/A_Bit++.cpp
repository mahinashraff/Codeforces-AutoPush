#include <stdio.h>
#include <string.h>
// Mahin

int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;

    while (n--)
    {
        char s[5];
        scanf("%s", &s);
        if (strcmp(s, "X++") == 0 || strcmp(s, "++X") == 0)
        {
            x++;
        }
        else if (strcmp(s, "X--") == 0 || strcmp(s, "--X") == 0)
        {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}