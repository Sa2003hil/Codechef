#include <stdio.h>
#define MAX 100
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int arrm[MAX], arrk[MAX];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arrm[i]);
        }
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &arrk[i]);
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (arrm[i] == arrk[j])
                {
                    count++;
                    break;
                }
            }
        }

        int ign = n - m - (k - count);

        printf("%d %d\n", count, ign);
    }

    return 0;
}
