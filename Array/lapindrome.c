#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[101];
        scanf("%s", str);
        int len = strlen(str);
        int freq1[26] = {0}, freq2[26] = {0};
        int freq3[26] = {0}, freq4[26] = {0};
        int valid = 1;
        if (len % 2 == 0)
        {
            for (int i = 0; i < len / 2; i++)
            {
                freq1[str[i] - 'a']++;
            }
            for (int i = len / 2; i < len; i++)
            {
                freq2[str[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (freq1[i] != freq2[i])
                {
                    valid = 0;
                    break;
                }
            }
            if (valid)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            for (int i = 0; i < len / 2; i++)
            {
                freq3[str[i] - 'a']++;
            }
            for (int i = len / 2 + 1; i < len; i++)
            {
                freq4[str[i] - 'a']++;
            }

            for (int i = 0; i < 26; i++)
            {
                if (freq3[i] != freq4[i])
                {
                    valid = 0;
                    break;
                }
            }
            if (valid)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
