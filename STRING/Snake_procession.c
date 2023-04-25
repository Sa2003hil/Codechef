#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        char str[n + 1];
        scanf("%s", str);

        char str2[n + 1];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != '.')
            {
                str2[j] = str[i];
                j++;
            }
        }
        str2[j] = '\0';

        int flag = 0;
        int len2 = strlen(str2);
        for (int i = 0; i < len2; i++)
        {
            if (i % 2 == 0 && str2[i] != 'H')
            {
                flag = 1;
                break;
            }
            else if (i % 2 != 0 && str2[i] != 'T')
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Invalid\n");
        }
        else
        {
            printf("Valid\n");
        }
    }

    return 0;
}
