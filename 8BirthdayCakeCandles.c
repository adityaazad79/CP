#include <stdio.h>

int main()
{
    int n, temp = 0, c = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (temp == arr[i])
        {
            c++;
        }
    }
    printf("%d", c);

    return 0;
}
