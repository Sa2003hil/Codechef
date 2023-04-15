#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, i, j;
        scanf("%d %d", &n, &k);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int ans = 0, flag = 0;

        for (i = 0; i < n; i++)
        {
            if (k >= arr[i])
            {
                printf("1");
                k = k - arr[i];
            }

            else
            {
                printf("0");
            }
        }
    }
    return 0;
}
