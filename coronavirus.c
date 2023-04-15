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
        int min = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int leng = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < n; i++)
        {

            if (arr[i + 1] - arr[i] <= 2)
            {
                max = leng;
                min = leng;
            }

            else if (arr[i+1] - arr[i] > 2)
            {
                max = 1;
                min = 1;
            }
        }
        printf("%d %d", min, max);
    }
    return 0;
}
