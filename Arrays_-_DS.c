/* https://www.hackerrank.com/challenges/arrays-ds?isFullScreen=true */

#include <stdio.h>
#include <stdlib.h>

void revArray(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int size, i;
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    revArray(arr, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}