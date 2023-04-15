#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int num, rev = 0, rem;
        scanf("%d", &num);
        int temp = num;
        while (num != 0)
        {
            rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }
        if (temp == rev)
        {
            printf("wins\n");
        }
        else
        {
            printf("loses\n");
        }
    }

    return 0;
}
