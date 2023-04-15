#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d\n", &t);

    while (t--)
    {
        int i, leng;
        char str[10], str2[10];

        // fgets(str, 11, stdin);
        // fgets(str2, 11, stdin);

        gets(str);
        gets(str2);

        char temp1 = 'G';
        char temp2 = 'B';

        leng = strlen(str);

        for (i = 0; i < 9; i++) //  for fgets use leng - 1 to avoid '\0' null pointer
        {

            if (str[i] == str2[i])
            {
                if (str[i] == '\0')
                {
                    continue;
                }
                str[i] = temp1;
            }
            else
            {
                str[i] = temp2;
            }
        }

        printf("%s\n", str);
    }
    return 0;
}
