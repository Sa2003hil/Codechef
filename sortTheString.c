#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        char str[n];
        scanf("%s", str);
        int count10 = 0, count01 = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1')
            {
                printf("yes %d\n", i);
                if (str[i] - '0' ^ str[i + 1] - '0' == 1)
                {
                    count10++;
                }
            }

            // if (str[i] == '0')
            // {
            //     if (str[i] - '0' ^ str[i + 1] - '0' == 0)
            //     {
            //         count01++;
            //     }
            // }
        }
        printf("%d\n", count10);
    }
    return 0;
}
