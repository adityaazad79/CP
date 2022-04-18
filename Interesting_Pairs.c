/* https://www.codechef.com/START13C/problems/DIVPAIRS */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, count = 0;
        scanf("%d", &n);

        int arr[n];
        for (int j = 1; j < n + 1; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 1; j < n; j++)
        {
            for (int k = j + 1; k < n + 1; k++)
            {
                if ((arr[j] * arr[k]) % (j * k) == 0)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}