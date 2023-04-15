#include <stdio.h>

int countnum(char name[]);

int main(int argc, char const *argv[])
{
    char name[300];

    fgets(name, 300, stdin);
    countnum(name);

    return 0;
}

int countnum(char name[])
{
    int count1 = 0, count2 = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == "START38")
        {
            count1 = count1 + 1;
        }

        else if (name[i] == ' ')
        {
            continue;
        }
        else
        {
            count2 = count2 + 1;
        }

        printf("%d ", count1);
        printf("%d", count2);
    }
}