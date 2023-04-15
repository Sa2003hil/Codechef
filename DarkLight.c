#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;

        scanf("%d %d", &n, &k);
        if (k == 1)
        {
            if (n == 0 || n == 1 || n == 2 || n == 3)
            {
                printf("on\n");
            }
        }
        else if (k == 0)
        {
            if (n == 4)
            {
                printf("off\n");
            }
        }
        else
        {
            printf("Ambiguous\n");
        }
    }
    return 0;
}
