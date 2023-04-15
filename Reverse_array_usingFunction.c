#include <stdio.h>
int reverse(int arr[], int n);
void printrev(int arr[], int n);

int main(int argc, char const *argv[])
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
    printrev(arr, 6);
    return 0;
}

int reverse(int arr[], int n)
{
    int i, frstval, scndval;
    // n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n / 2; i++)
    {
        frstval = arr[i];
        scndval = arr[n - i - 1];

        arr[i] = scndval;
        arr[n - i - 1] = frstval;
    }
}

void printrev(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}