#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int sum = 0;
        for (int num = l; num <= r; num++)
        {
            int temp = num;
            int rev = 0;
            while (temp != 0)
            {
                int rem = temp % 10;
                rev = (rev * 10) + rem;
                temp /= 10;
            }
            if (rev == num)
            {
                sum += num;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
