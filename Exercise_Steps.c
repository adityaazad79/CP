#include <stdio.h>

int main()
{
    int n, x = 0;
    int arr[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            x++;
        }
    }
    printf("%d", x);

    return 0;
}