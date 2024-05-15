#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int> A)
{
    int size=A.size();
    unordered_map<int, int> u;
    for (int i=0;i<size;i++)
        u[A[i]]++;

    int s=size;
    for(auto it:u){
        s=s-it.second;
        if(s==it.first)
            return 1;
    }
    return -1;
}

int fun2(vector<int> A)
{
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; ++i)
        if (A[i + 1] != A[i] && A[i] == (A.size() - i - 1))
            return 1;

    if (A[A.size() - 1] == 0)
        return 1;

    return -1;
}

int fun3(vector<int> A)
{
    int n = A.size(), cnt = n;

    unordered_map<int, int> mp;
    // unordered_map<int, int> u;
    for (int i = 0; i < n; i++)
        mp[A[i]]++;

    for (auto it : mp)
    {
        cnt = cnt - it.second;
        if (cnt == it.first)
            return 1;
    }
    return -1;
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

    cout << fun(A) << endl;

    return 0;
}