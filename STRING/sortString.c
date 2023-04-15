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
        scanf("%s", &str);

        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                count0++;
            }
            else if (str[i] == '1')
            {
                count1++;
            }
        }

        // printf("0's = %d\n1's = %d", count0, count1);
        for (int i = 0; i < count0; i++)
        {
            printf("0");
        }
        for (int j = 0; j < count1; j++)
        {
            printf("1");
        }
    }
    return 0;
}
