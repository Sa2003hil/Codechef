#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int leng;
        scanf("%d", &leng);

        char a[100];
        scanf("%s", a);

        char str1[leng / 2 + 1], str2[leng / 2 + 1];

        if (leng % 2 == 0)
        {
            for (int i = 0; i < leng / 2; i++)
            {
                str1[i] = a[i];
            }
            str1[leng / 2] = '\0'; // terminate the string

            for (int i = leng / 2; i < leng; i++)
            {
                str2[i - leng / 2] = a[i];
            }
            str2[leng / 2] = '\0'; // terminate the string
        }
        else if (leng % 2 != 0)
        {
            for (int i = 0; i < leng / 2; i++)
            {
                str1[i] = a[i];
            }
            str1[leng / 2] = '\0'; // terminate the string

            for (int i = leng / 2 + 1; i < leng; i++)
            {
                str2[i - leng / 2 - 1] = a[i];
            }
            str2[leng / 2] = '\0'; // terminate the string
        }
        // printf("%s %s", str1, str2);

        char conc1[100], conc2[100];
        strcpy(conc1, str2);
        strcat(conc1, str1); // concatenate in reverse order
        strcpy(conc2, str1);
        strcat(conc2, str2); // concatenate in original order

        if (strcmp(conc1, a) == 0 || strcmp(conc2, a) == 0)
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
