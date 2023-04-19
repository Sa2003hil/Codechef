#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000000

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        char str[n + 1];
        scanf("%s", str);

        if (str[0] == '0')
        {
            str[0] = '1';
        }
        printf("%s", str);

        for (int i = 0; i < k; i++)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}
