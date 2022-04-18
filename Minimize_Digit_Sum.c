#include <stdio.h>
int solve(int n, int base)
{
    int sum = 0;
    while (n > 0)
    {
        int remainder = n % base;
        sum += remainder;
        n = n / base;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, l, r, temp = 100, sum = 0, count = 0;
        scanf("%d %d %d", &n, &l, &r);
        for (int i = l; i <= r; i++)
        {
            sum = solve(n, i);
            if (sum <= temp)
            {
                temp = sum;
                count = i;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}