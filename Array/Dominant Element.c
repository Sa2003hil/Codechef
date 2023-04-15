#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        int n, i, count = 0;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (a[0] != a[1])
        {
            count++; // If first player made a mistake
        }
        for (i = 1; i < n - 1; i++)
        {
            if (a[i] != a[i - 1] || a[i] != a[i + 1])
            {
                count++; // If current player made a mistake
            }
        }
        if (a[n - 1] != a[n - 2])
        {
            count++; // If last player made a mistake
        }
        printf("%d\n", count);
    }

    return 0;
}
