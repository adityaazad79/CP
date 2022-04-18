// Manish

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n & 1)
        {
            printf("YES\n");
            for (int i = 1; i <= n; i += 2)
            {
                printf("%d ", i);
            }
            for (int i = n - 1; i >= 2; i -= 2)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
        else if (n != 2)
        {
            printf("YES\n%d ", n / 2);
            for (int i = 1; i < n / 2; i++)
            {
                printf("%d ", i);
            }
            for (int i = n; i > n / 2; i--)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}