#include <stdio.h>

int main()
{
    // your code goes here
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, arr[200] = {0};
        scanf("%d", &b);
        arr[0] = 1;
        int i = 1, m = 1, index = 0, temp = 0, x;
        while (i <= b)
        {
            int k = m;
            index = 0;
            while (k--)
            {
                x = arr[index] * i + temp;
                arr[index] = x % 10, temp = x / 10, index++;
            }
            while (temp != 0)
            {
                arr[index] = temp % 10;
                temp = temp / 10;
                index++, m++;
            }
            i++;
        }
        while (m--)
        {
            printf("%d", arr[m]);
        }
        printf("\n");
    }
    return 0;
}