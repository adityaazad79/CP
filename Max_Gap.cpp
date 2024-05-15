// Max Consecutive Gap
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun1(vector<int> A)
{
    int size = A.size();
    int max_num = INT_MIN, min_num = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (max_num < A[i])
            max_num = A[i];
        if (min_num > A[i])
            min_num = A[i];
    }

    int interval = (int)ceil((max_num - min_num + 0.0) / (size - 1));
    vector<int> Vmin(size - 1, INT_MAX);
    vector<int> Vmax(size - 1, -1);

    int index;
    for (int i = 0; i < size; i++)
    {
        if (A[i] == min_num || A[i] == max_num)
            continue;
        index = (A[i] - min_num) / interval;
        Vmin[index] = min(Vmin[index], A[i]);
        Vmax[index] = max(Vmax[index], A[i]);
    }
    int prev = min_num;
    int max_gap = 0;
    // for (int i = 0; i < size; i++)
    for (int i = 0; i < size - 1; i++)
    {
        if (Vmax[i] == -1)
            continue;
        max_gap = max(Vmin[i] - prev, max_gap);
        prev = Vmax[i];
    }
    max_gap = (max_num - prev, max_gap);

    return max_gap;
}

int fun2(vector<int> A)
{
    int size = A.size();
    if (size == 1)
        return 0;
    sort(A.begin(), A.end());
    int max = -1;
    for (int i = 1; i < size; i++)
    {
        if (max < (A[i] - A[i - 1]))
            max = A[i] - A[i - 1];
    }

    return max;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int temp;
    vector<int> A;
    while (n--)
    {
        cin >> temp;
        A.push_back(temp);
    }

    // cout<<"Max Dist : "<<fun(A)<<endl;
    cout << fun1(A) << endl;
    // cout<<fun2(A)<<endl;

    return 0;
}