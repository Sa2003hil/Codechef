#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main(int argc, char const *argv[])
{
    char password[100];
    scanf("%s", &password);
    salting(password);

    return 0;
}

void salting(char password[])
{
    char newpassword[200];
    char salt[] = "123";

    strcpy(newpassword, password);
    strcat(newpassword, salt);
    puts(newpassword);
}
