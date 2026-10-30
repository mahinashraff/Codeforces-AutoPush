#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Mahin

int main()
{
    char s[105];
    scanf("%100s", s);
    int up = 0, low = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = (up > low) ? toupper(s[i]) : tolower(s[i]);
    }
    printf("%s", s);
    return 0;
}