#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, *arr;
    scanf("%d", &t);
    arr = (int *)malloc(30 * sizeof(int));
    arr[0] = 2;
    for (int j = 1; j < 30; j++)
    {
        arr[j] = arr[j - 1] * 2;
    }
    for (int i = 0; i < t; i++)
    {
        int n, *a, sum, sumt = 0, min, mini, dif;

        scanf("%d", &n);
        a = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            sum = 1;
            scanf("%d", &a[j]);
            if (j == 0)
            {
                min = a[0] + 1;
            }
            if (min > a[j])
            {
                min = a[j];
                mini = j + 1;
            }
            sumt += a[j];
        }
        for (int k = 0; k < 30; k++)
        {
            if (sumt == arr[k])
            {
                printf("0\n");
                break;
            }
            else if (sumt < arr[k])
            {
                dif = arr[k] - sumt;
                int mul;
                mul = dif / min;
                printf("1\n1 %d\n%d\n", ++mul, mini);
                break;
            }
        }
        free(a);
    }
    free(arr);

    return 0;
}