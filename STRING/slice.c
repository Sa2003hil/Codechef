#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main(int argc, char const *argv[])
{
    char str[] = "mynameis";

    slice(str, 2, 5);

    return 0;
}

void slice(char str[], int n, int m)
{

    // int n, m;
    // printf("Enter the n value here:\n ");
    // scanf("%d", &n);

    // printf("Enter the m value here:\n ");
    // scanf("%d", &m);

    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}
