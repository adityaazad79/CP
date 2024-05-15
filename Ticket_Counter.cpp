#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int> &A, vector<int> &B)
{
    int size = A.size();
    if(size==1)
        return 0;
    int long long sum=0;
    int ct=0;
    for (int i=0;i<size;i++)
    {
        if(A[i]<sum)
            ct++;
        else
            sum+=B[i];
    }
    return ct;
    // int time = 0;
    // int ans = 0;
    // for (int i = 0; i < A.size(); i++)
    // {
    //     if (A[i] < time)
    //         ans++;
    //     else
    //         time += B[i];
    // }
    // return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> A;
    vector<int> B;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        B.push_back(temp);
    }

    cout << fun(A, B) << endl;

    return 0;
}