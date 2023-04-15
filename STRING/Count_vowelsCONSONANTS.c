#include <stdio.h>

int countvowels(char str[], char str2[]);

int main(int argc, char const *argv[])
{
    char str[200];
    char str2[200];

    // int n;
    // scanf("%d", &n);

    printf("Enter the string here:\n");
    fgets(str, 200, stdin);
    fgets(str2, 200, stdin);

    countvowels(str, str2);

    return 0;
}

int countvowels(char str[], char str2[])
{

    int count1 = 0;
    int count0 = 0;
    int count11 = 0;
    int count00 = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '1')
        {
            count1++;
        }
        else if (str[i] == '0')
        {
            count0++;
        }
    }

    for (int j = 0; str2[j] != '\0'; j++)
    {
        if (str2[j] == '1')
        {
            count11++;
        }
        else if (str2[j] == '0')
        {
            count00++;
        }
    }

    if (count1 == count11 && count0 == count00)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}