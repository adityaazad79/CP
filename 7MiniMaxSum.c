/* https://www.hackerrank.com/challenges/mini-max-sum/problem */

#include <stdio.h>

int main()
{
    long int arr[5], temp, c1 = 0, c2 = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%ld", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        c1 += arr[i];
        c2 += arr[i + 1];
    }
    printf("%ld %ld", c1, c2);

    return 0;
}