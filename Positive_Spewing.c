/* https://www.codechef.com/START11C/problems/POSSPEW */
//Incomplete

#include <stdio.h>

int main()
{
    int t, n, k, s;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        s = 0;
        scanf("%d%d", &n, &k);
        for (int l = 0; l < k; l++)
        {
        }

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < n; j++)
        {

            if (arr[j] > 0 && j != n && j != 0)
            {
                arr[j + 1]++;
                arr[j - 1]++;
            }
            else if (arr[j] > 0 && j == 0)
            {
                arr[j + 1]++;
                arr[n]++;
            }
            else if (arr[j] > 0 && j == n)
            {
                arr[n - 1]++;
                arr[0]++;
            }
        }
        for (int l = 0; l < n; i++)
        {

            s += arr[l];
        }
        printf("%d\n", s);
    }

    return 0;
}