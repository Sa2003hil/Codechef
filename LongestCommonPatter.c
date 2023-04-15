#include <stdio.h>
#include <string.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str1[100];

        // fgets(str1, 100, stdin);
        // fgets(str2, 100, stdin);

        scanf("%s", str1);
        char str2[100];
        scanf("%s", str2);

        int cnt = 0;

        for (int i = 0; i < strlen(str1); i++)
        {
            for (int j = 0; j < strlen(str2); j++)
            {
                if (str1[i] == str2[j])
                {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
