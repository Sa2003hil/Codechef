#include <stdio.h>
int main(int argc, char const *argv[])
{
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

        int leng = sizeof(arr) / sizeof(arr[0]);
        int count;

        // int lenght = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < n; i++)
        {
            if (leng == 1)
            {
                count = 1;
            }

            for (int j = i + 1; j < n; j++)
            {

                if (arr[i] != arr[j])
                {
                    count = leng;
                }
                else if (arr[i] == arr[j])
                {
                    count = leng - 1;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
