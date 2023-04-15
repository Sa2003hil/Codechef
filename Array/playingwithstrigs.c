#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1], m[n + 1], count1 = 0, count2 = 0;

        scanf("%s", s);
        scanf("%s", m);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            if (m[i] == '1')
            {
                count2++;
            }
        }

        if (count1 == count2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
