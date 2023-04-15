#include <stdio.h>
int countstr(char arr[]);

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("The length of the string is : %d", countstr(name));
    return 0;
}

int countstr(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}
