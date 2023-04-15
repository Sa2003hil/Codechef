#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n][2];
        int newarr[n][2];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] <= 8)
            {
                int max = arr[i][1];
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i][0] == arr[j][0])
                    {
                        if (arr[j][1] > max)
                        {
                            max = arr[j][1];
                        }
                        arr[j][0] = 9; // This is the conditions so it can't iterate again on the same element
                    }
                }
                total += max;
            }
        }
        printf("%d\n", total);
    }

    return 0;
}
