/* https://www.codechef.com/LTIME100C/problems/ALBOFACE */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n;
        scanf("%lld", &n);

        if (n % 2 == 0)
        {
            long long int k;
            k = n / 2;
            if (k % 2 == 0)
            {
                printf("Alice\n");
            }
            else
            {
                printf("Bob\n");
            }
        }
        else
        {
            n = n - 1;
            long long int k;
            k = n / 2;
            if (k % 2 == 0)
            {
                printf("Alice\n");
            }
            else
            {
                printf("Bob\n");
            }
        }
    }

    return 0;
}