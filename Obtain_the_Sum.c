#include <stdio.h>
int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n, s, sum = 0, flag = 0;
        scanf("%lld%lld", &n, &s);
        sum = n * (n + 1) / 2;
        if (sum <= s)
        {
            printf("-1\n");
        }
        else if (sum - n > s)
        {
            printf("-1\n");
        }
        else
            printf("%lld\n", sum - s);
    }

    return 0;
}