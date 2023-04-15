#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE] = {0};
    int size, maxFreq = 0, maxElement, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for (i = 0; i < size; i++)
    {
        if (freq[arr[i]] > maxFreq)
        {
            maxFreq = freq[arr[i]];
            maxElement = arr[i];
        }
    }

    printf("The maximum occurring element in the array is %d, which occurs %d times.\n", maxElement, maxFreq);
    for (int i = 1; i <= size; i++)
    {
        if (freq[i] > 0)
        {
            /* code */
            printf("The feq of  %d  is %d\n", i, freq[i]);
        }
    }

    return 0;
}
