// https://www.codechef.com/JAN222C/problems/MINFD

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, x, *a, y = 0, j;
        scanf("%d%d", &n, &x);
        a = (int *)malloc(n * sizeof(int));
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] < a[k])
                {
                    int temp;
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        j = 0;
        while ((y != x))
        {
            if (y < x)
            {
                y += a[j];
                j++;
            }
            else
            {
                break;
            }
        }
        if ((j < n) || (j == n))
        {
            printf("%d\n", j);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}