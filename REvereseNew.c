#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {12, 43, 11, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n / 2; i++)
    {
        int first = arr[i];
        int last = arr[n - i - 1];

        arr[i] = last;
        arr[n - i - 1] = first;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
