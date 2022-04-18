// * https://www.codechef.com/START13C/problems/VACCINQ */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, p, x, y, s = 0;
        scanf("%d%d%d%d", &n, &p, &x, &y);

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < p; j++)
        {
            if (arr[j] == 0)
            {
                s += x;
            }
            else
            {
                s += y;
            }
        }
        printf("%d\n", s);
    }

    return 0;
}