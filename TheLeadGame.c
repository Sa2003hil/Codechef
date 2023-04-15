#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int i, j, arr[n][2];
    int newarr[n][2];

    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (i = 0; i < n; i++)
        {
            if (arr[i][0] > arr[i][1])
            {
                newarr[i][1] = arr[i][0] - arr[i][1];
                newarr[i][0] = 1;
            }

            else
            {
                newarr[i][1] = arr[i][1] - arr[i][0];
                newarr[i][0] = 2;
            }
        }
    }
    int max = 0;

    for (i = 0; i < n; i++)
    {
        if (newarr[i][1] > newarr[max][1])
        {
            max = i;
        }
    }
    printf("%d %d\n", newarr[max][0], newarr[max][1]);

    return 0;
}
