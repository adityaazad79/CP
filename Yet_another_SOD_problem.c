/* https://www.codechef.com/LTIME100C/problems/SOD3 */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int l, r;
        scanf("%lld%lld", &l, &r);
        if (l % 3 == 0)
        {
            printf("%lld\n", (r / 3) - (l / 3) + 1);
        }
        else
        {
            printf("%lld\n", (r / 3) - (l / 3));
        }
    }

    return 0;
}