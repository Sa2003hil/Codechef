#include <stdio.h>

int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);
    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int x1, x2;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x1, &x2);
        int sum = 0;
        for (int j = x1 - 1; j < x2; j++)
        {
            sum += arr1[j] * arr2[j];
        }
        printf("%d\n", sum);
    }

    return 0;
}
