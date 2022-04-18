#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float a, b, c, d;
        scanf("%f%f%f%f", &a, &b, &c, &d);
        if ((a * a) / (c * c * c) == (b * b) / (d * d * d))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}