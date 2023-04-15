#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        int arr[26];
        int i, sum = 0;
        char str[100];

        for (i = 0; i < 26; i++)
        {
            scanf("%d", &arr[i]);
        }

        scanf("%s", str);
        int c[26] = {0};

        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] < 97)
            {
                str[i] = str[i] + 32;
                c[str[i] - 'a'] += 1;  // this is done for storing the element at their respective index
            }
            else
            {
                c[str[i] - 'a'] += 1;
            }
        }

        for (i = 0; i < 26; i++)
        {
            if (c[i] == 0)
            {
                sum += arr[i];
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
