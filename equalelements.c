#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int isDistinct = 1;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    isDistinct = 0;
                    break;
                }
            }
            if (isDistinct)
            {
                count++;
            }
        }

        printf("%d\n", count - 1);
    }
    return 0;
}
