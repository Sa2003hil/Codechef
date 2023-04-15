#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        char str[n];

        scanf("%s", str);
        // printf("%s", str);
        // printf("\n");
        int count10 = 0, count01 = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1')
            {
                // printf("no %d\n", i);
                if ((str[i] - '0') ^ (str[i + 1] - '0') == 1)
                {
                    count10++;
                }
            }
            else if (str[i] == '0')
            {
                // printf("yes\n");
                if ((str[i] - '0') ^ (str[i + 1] - '0') == 1)
                {
                    count01++;
                }
            }
        }
        printf("count of 01 = %d\ncount of 10 = %d\n", count01, count10);
        // int occurence1 = x * count01;
        // int occurence2 = y * count10;

        // // printf("%d\n", occurence1);
        // // printf("%d\n", occurence2);

        // if (a > b)
        // {
        //     printf("%d\n", b);
        // }

        // else if (occurence1 || occurence2 == 0)
        // {
        //     printf("0");
        // }

        // else
        // {
        //     printf("%d\n", a);
        // }
    }

    return 0;
}
