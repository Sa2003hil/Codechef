#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int max = 0;
        for (int i = 0; i < n - k; i++)
        {
            int sum = 0;
            for (int j = 0; j < i + k; j++)
            {
                sum += arr[j]
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
