#include <stdio.h>
#include <string.h>

void sortstring(char string[], int leng)
{
    int chartemp;
    for (int i = 0; i < leng; i++)
    {
        for (int j = i + 1; j < leng; j++)
        {
            if (string[j] < string[i])
            {
                chartemp = string[i];
                string[i] = string[j];
                string[j] = chartemp;
            }
        }
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);
    getchar(); // Consume the newline character left by scanf

    while (t--)
    {
        char string[100];
        fgets(string, 100, stdin);

        int leng = strlen(string) - 1; // Subtract 1 to remove the newline character
        sortstring(string, leng);

        // printf("%s\n", string);

        int res = 0;
        for (int i = 1; i <= leng; i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                if (string[i - 1] == c)
                {
                    int letter_pos = c - 'a' + 1;
                    res += i * letter_pos;
                    break;
                }
            }
        }

        printf("%d\n", res);
    }
    return 0;
}
