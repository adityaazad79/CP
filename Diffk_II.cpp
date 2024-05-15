#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(const vector<int> &A, int B)
{
    int size = A.size();
    if (size == 1 || B==0)
        return 0;
    unordered_map<int, int> ump;
    for (int i = 0; i < size; i++)
    {
        ump[A[i]]++;
    }
    // int u_size = ump.size();
    for (int i = 0; i < size; i++)
    {
        if (ump[A[i]] && ump[abs(B - A[i])])
            return 1;
    }
    return 0;
}

int fun2(vector<int> A, int B)
{
    int size=A.size();
    unordered_map<int, int> ump;
    for (int i=0;i<size; i++)
    {
        if (ump.find(B + A[i]) != ump.end() || ump.find(A[i] - B) != ump.end())
            return 1;
        if (ump.find(A[i]) == ump.end())
            ump[A[i]] = i;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int temp;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }

    cout << fun(A, k) << endl;

    return 0;
}