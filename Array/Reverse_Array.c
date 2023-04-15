#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, frstval, scndval;

    int arr[6] = {1, 2, 3, 4, 5, 6};
    n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n / 2; i++)
    {
        frstval = arr[i];
        scndval = arr[n - i - 1];
        arr[i] = scndval;
        arr[n - i - 1] = frstval;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
