#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{
    // your code goes here
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

        int z = arr[n] + arr[n - 1];

        int flag = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] + arr[j] > z)
                {
                    swap(&arr[0], &arr[n - 2]);
                    flag = 0;
                    if (arr[i] + arr[j] < z)
                    {
                        flag = 1;
                    }
                }
                else if (arr[i] + arr[j] < z)
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else if (flag == 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
