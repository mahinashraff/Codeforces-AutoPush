#include <stdio.h>
#include <string.h>
// Mahin

int main()
{
    char str[101];
    scanf("%100s", str);
    int len = strlen(str);
    
    int freq[26] = {0};
     for (int i = 0; i < len; i++)
    {
        freq[str[i] - 'a']++;
    }
    
    int distinct_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            distinct_count++;
        }
    }
    
    if (distinct_count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
   
    return 0;
}