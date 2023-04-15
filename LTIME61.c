#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int n, m, count = 0;
        int d = 2, e = 9, f = 3;
        scanf("%d %d", &n, &m);
        // scanf("%d", &m);
        for (int i = n; i <= m; i++)
        {
            if (i % 10 == d || i % 10 == e || i % 10 == f)
            {
                count = count + 1;
            }
            // printf("%d", i);
        }
        printf("%d\n", count);
    }

    return 0;
}
