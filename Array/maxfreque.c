#include <stdio.h>
#define max 200000 // macro
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[max], freq[max] = {0};
        int maxfreq = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] > maxfreq)
            {
                maxfreq = freq[arr[i]];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] > 0)
            {
                printf("Element %d occur %d times\n", i, freq[i]);
                // printf("%d\n", maxfreq);
            }
        }
    }

    return 0;
}
