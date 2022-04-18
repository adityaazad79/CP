/* https://www.hackerrank.com/challenges/diagonal-difference/problem */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, **arr, i, j, s1 = 0, s2 = 0, r;
    scanf("%d", &n);

    arr = (int **)malloc(n * sizeof(int *));

    for (i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                s1 += arr[i][j];
            }

            if ((i + j) == (n - 1))
            {
                s2 += arr[i][j];
            }
        }
    }
    r = s1 - s2;
    if (r < 0)
    {
        r *= -1;
    }
    printf("%d", r);

    return 0;
}