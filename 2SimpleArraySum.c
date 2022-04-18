/* https://www.hackerrank.com/challenges/simple-array-sum/problem */

#include <stdio.h>

int main()
{
    int n, m, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        s += m;
    }
    printf("%d", s);
    return 0;
}