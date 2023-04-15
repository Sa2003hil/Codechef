#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    char str[n], temp1[100], temp2[100];

    scanf("%s", str);

    int leng = strlen(str);
    printf("the length of the string is :%d\n", leng);

    char A[100], B[200];
    int mid = leng / 2;

    for (int i = 0; i < mid; i++)
    {
        A[i] = str[i];
    }
    strcpy(temp1, A);

    for (int k = 0, i = mid; i <= leng; i++, k++)
    {
        B[k] = str[i];
    }
    strcpy(temp2, B);

    strcat(A, B);
    printf("%s\n", A);

    strcat(temp2, temp1);
    printf("%s\n", temp2);

    if (strcat(A, B) == strcat(temp2, temp1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
