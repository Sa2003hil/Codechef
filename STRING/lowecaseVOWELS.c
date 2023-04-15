#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];

    printf("Please enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Vowels after converting into uppercase: %s", str);

    return 0;
}
