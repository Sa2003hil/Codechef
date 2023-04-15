#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n], countpos = 0, counneg = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = arr[i] + 1; j < arr[i + 1]; j++)
            {
                countpos++;
            }

            if (arr[i] + 1 > arr[i + 1])
            {
                for (int j = arr[i + 1]; j < arr[i]; j++)
                {
                    counneg++;
                }
            }
        }
        printf("%d\n", countpos + counneg);
    }
    return 0;
}
