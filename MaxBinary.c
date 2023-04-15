#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000000

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        char str[MAX_LENGTH];
        char str2[MAX_LENGTH];

        for (int i = 0; i < n; i++)
        {
            scanf("%c", &str[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (str[0] == '1')
            {
                for (int j = 0; j < k; j++)
                {
                    str2[j] = '0';
                }
                str2[k] = '\0';
                break;
            }

            else if (str[i] == '0')
            {
                str[i] = '1';
                for (int j = 0; j < k - 1; j++)
                {
                    str2[j] = '0';
                }
                str2[k - 1] = '\0';
                break;
            }
        }

        strcat(str, str2);
        printf("%s", str);
    }

    return 0;
}
