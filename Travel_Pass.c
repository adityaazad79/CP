/* https://www.codechef.com/SEPT21C/submit/TRAVELPS */

#include <stdio.h>

int main()
{
    int tc, i, j, n, a, b, sum = 0;
    char s[100];
    scanf("%d", &tc);
    for (i = 0; i < tc; i++)
    {
        scanf("%d %d %d", &n, &a, &b);
        scanf("%s", s);

        for (j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                sum += b;
            }
            else
            {
                sum += a;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}