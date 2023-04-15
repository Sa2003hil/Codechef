#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int i, j, k, arr[n][3];

    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (i = 0; i < n; i++)
        {

            if (arr[i][2] >= arr[i][0])
            {
                if (arr[i][2] < arr[i][1])
                {
                    printf("YES\n");
                }
                else if (arr[i][2] = arr[i][1])
                {
                    printf("NO \n");
                }
            }
            else
            {
                printf("NO\n");
            }
        }

        return 0;
    }
}