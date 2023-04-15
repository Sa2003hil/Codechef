#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, arr[5000], count = 0;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] >= 1000)
            {
                count++;
            }

            printf("%d", count);
        }
    }

    return 0;
}