/* https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem */

#include <stdio.h>

int main()
{
    int n, min = 0, max = 0, tempn, tempx;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[0]);
    tempn = tempx = arr[0];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < tempn)
        {
            tempn = arr[i];
            min++;
        }
        else if (arr[i] > tempx)
        {
            tempx = arr[i];
            max++;
        }
    }
    printf("%d %d", max, min);

    return 0;
}