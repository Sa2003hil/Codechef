#include <stdio.h>

void checkspace(char str[]);

int main(int argc, char const *argv[])
{
    char str[200];
    printf("Enter the string here:");
    fgets(str, 200, stdin);
    checkspace(str);
    return 0;
}

void checkspace(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
                }
    }
    printf("The count of spaces is: %d", count);
}
