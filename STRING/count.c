#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[100];
    fgets(name, 100, stdin);

    printf("The len of the string is : %zu", strlen(name));
    return 0;
}
