/* https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=false */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define LL long long
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int migratoryBirds(int arr_count, int *arr)
{
    int counter[6] = {0}, result = 0, max = 0;
    for (int i = 0; i < arr_count; ++i)
    {
        int id = arr[i];
        counter[id]++;
        if (counter[id] > max)
        {
            max = counter[id];
            result = id;
        }
        else if (counter[id] == max)
            result = fmin(result, id);
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int result = migratoryBirds(n, arr);
    cout << result << endl;

    return 0;
}