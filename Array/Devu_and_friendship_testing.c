#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, j;
        scanf("%d", &n);
        int a[n], count = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n", n - count);
    }
    return 0;
}
