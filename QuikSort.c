#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high)
{
    int i;
    int j;
    int pivot = arr[high];

    i = low;
    j = low;
    while (j < high)
    {
        if (arr[j] <= pivot)
        {
            swap(&arr[j], &arr[i]);
            i++;
        }
        j++;
    }
    swap(&arr[high], &arr[i]);
    return (i);
}

void quik(int *arr, int low, int high)
{
    int j;

    if (low < high)
    {
        j = partition(arr, low, high);
        quik(arr, low, j - 1);
        quik(arr, j+1, high);
    }
}
