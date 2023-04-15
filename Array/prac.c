#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkVowel(char ch)
{
    int constcount = 0;
    ch = toupper(ch);
    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
        return 1;
    else
        return 0;
}
int main()
{
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]", str);
    int i, strlen, count = 0;
    for (i = 0; str[i]; i++)
        ;
    strlen = i;
    for (i = 0; i < strlen - 1; i++)
    {
        if (checkVowel(str[i]))
        {
            if (checkVowel(str[i + 1]))
            {
                count++;
            }
        }
    }
    if (count >= 4)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}