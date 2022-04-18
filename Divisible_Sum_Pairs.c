/* https://www.hackerrank.com/challenges/divisible-sum-pairs/problem */

#include <stdio.h>

int main()
{
    int n, k, d, c = 0;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                d = (arr[i] + arr[j]) % k;
                if (d == 0)
                {
                    c++;
                }
            }
        }
    }
    printf("%d", c);

    return 0;
}