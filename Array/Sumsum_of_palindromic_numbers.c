#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int rem, rev = 0, sum = 0;
        for (int num = l; num <= r; num++)
        {
            int temp = num;
            while (temp != 0)
            {
                rem = temp % 10;
                rev = (rev * 10) + rem;
                temp /= 10;
            }
            printf("%d\n", rev);
            if (num == rev)
            {
                sum += rev;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
