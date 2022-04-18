/* https://www.codechef.com/LTIME100C/problems/TWODISH */

#include <stdio.h>

int main()
{
    int t, n, a, b, c;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d%d", &n, &a, &b, &c);
        if (n <= b)
        {
            if (n <= (a + c))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}