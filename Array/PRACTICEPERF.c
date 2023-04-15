#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[100], count = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] >= 10)
        {
            count += 1;
        }
        }
    printf("%d", count);
    return 0;
}
