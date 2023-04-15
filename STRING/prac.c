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

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int unique = 1;
            for (int j = 0; j < i; j++)
            {
                if (arr[j] == arr[i])
                {
                    unique = 0;
                    break;
                }
            }
            if (unique)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
