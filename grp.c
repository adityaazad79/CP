#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    if (m < n)
    {
        printf("%d", m);
    }
    else
    {
        while (m >= n)
        {
            m -= n;
        }
        printf("%d", m);
    }

    return 0;
}