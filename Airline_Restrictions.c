/* https://www.codechef.com/SEPT21C/problems/AIRLINE */

#include <stdio.h>

int main()
{
    int t, a, b, c, d, e;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if (a + b <= d && c <= e)
        {
            printf("YES\n");
        }
        else if (b + c <= d && a <= e)
        {
            printf("YES\n");
        }
        else if (a + c <= d && b <= e)
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