#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, r;
        scanf("%ld %ld", &a, &b);
        long int sum = a + b;
        long int ans = 0;
        while (sum > 0)
        {
            r = sum % 10;
            if (r == 0 || r == 6 || r == 9)
            {
                ans = ans + 6;
            }

            else if (r == 1)
            {
                ans = ans + 2;
            }

            else if (r == 2 || r == 5 || r == 3)
            {
                ans = ans + 5;
            }

            else if (r == 4)
            {
                ans = ans + 4;
            }
            else if (r == 7)
            {
                ans = ans + 3;
            }

            else if (r == 8)
            {
                ans = ans + 7;
            }
            sum = sum / 10;
        }
        printf("%ld\n", ans);
    }

    return 0;
}
