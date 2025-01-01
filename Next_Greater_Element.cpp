#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(vector<int> A)
{
    int size = A.size();
    stack<int> S;
    vector<int> V(size);
    for (int i = 0; i < size; i++)
    {
        while (!S.empty() && A[i] > A[S.top()])
        {
            V[S.top()] = i;
            S.pop();
        }
        S.push(i);
    }
    while (!S.empty())
    {
        V[S.top()] = -1;
        S.pop();
    }
    for (int i = 0; i < size; i++)
    {
        if (V[i] != -1)
            cout << A[i] << " " << A[V[i]] << endl;
        else
            cout << A[i] << " " << -1 << endl;
    }
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
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }

    fun(A);
    return 0;
}