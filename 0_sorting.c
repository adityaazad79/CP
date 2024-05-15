#include <stdio.h>
int ct=0;

void traverse(int *arr, int size){
    ct++;
    printf("Iteration %d\n", ct);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // ct++;
}

void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++){
        // ct++;
        traverse(arr, size);
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
            // ct++;
            return sort(arr, size);
            // sort(arr,size);
        }
    }
}

int main()
{
    // int arr[] = {34, 45, 2, 3486, 245, 85, 52, 76, 3, 3, 645, 224, 65, 789, 123, 86};
    int size;
    scanf("%d", &size);
    int arr[size];
    int temp;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &temp);
        arr[i]=temp;
    }
    
    // int size = sizeof(arr) / sizeof(int);

    sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nct : %d\n",ct);

    return 0;
}