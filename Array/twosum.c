#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target = 6;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
            }
        }
    }
    return 0;
}