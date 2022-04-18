/* https://www.codechef.com/START13C/problems/SUPCHEF */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m, n, k;
        scanf("%d%d%d", &m, &n, &k);

        if (m > (n * k))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}