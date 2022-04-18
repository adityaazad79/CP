/* https://www.codechef.com/START12C/problems/GOODWEAT */

#include <stdio.h>

int main()
{
    int n, v, i, j, r, s;
    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        r = 0;
        s = 0;

        for (i = 0; i < 7; i++)
        {
            scanf("%d", &v);
            if (v == 1)
            {
                s++;
            }
            else
            {
                r++;
            }
        }

        if (s > r)
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