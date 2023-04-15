#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        char str[100];
        scanf("%s", str);
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    printf("%d\n", n - 2);
                    flag = 0;
                    i = n + 1;
                    break;
                }
            }
        }
        if (flag)
        {
            printf("-1\n");
        }
    }
    return 0;
}
