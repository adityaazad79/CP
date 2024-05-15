#include <stdio.h>
#include <stdbool.h>

static int it=0;
static int swp=0;
static int comp=0;

void traverse(int arr[],int size){
    // printf("Iteration : %d\n\n",it);
    it++;
    // for (int i = 0; i < size; i++)
    // {
        // printf("%d ",arr[i]);
    // }
    // printf("\n");
}

void swap(int *a, int *b)
{
    swp++;
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

// Basic Algo
void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++){
        traverse(arr,size);
        if (++comp && arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
            sort(arr, size);
        }
    }
}
// Optimization 1 : return {sort1}
void sort1(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++){
        traverse(arr,size);
        if (++comp && arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
            return sort1(arr, size);
        }
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        traverse(arr,n);
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}



int main()
{
    // int arr[] = {34, 45, 2, 3486, 245, 85, 52, 76, 3, 3, 645, 224, 65, 789, 123, 86};
    // int size = sizeof(arr) / sizeof(int);

    // printf("Size : %d\n",size);

    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    sort1(arr, size);
    // bubbleSort(arr,size);

    // traverse(arr,size);

    // printf("Final Sorted after iterations : %d\n\n",it);
    printf("No of comparisons : %d\n\n",comp);
    printf("No of swaps : %d\n\n",swp);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("swp: %d\n",swp);

    return 0;
}