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
        int arr1[n], arr2[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] || arr2[i] >= 1)
            {
                count++;
            }
            else if (arr1[i] && arr2[i] == 0)
            {
                count = 0;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
