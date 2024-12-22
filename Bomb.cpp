#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        vector<int> B(n);

        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = 0; i < n; i++)
            cin >> B[i];

        priority_queue<pair<int, int>> P;

        for (int i = 0; i < n; i++)
            P.push(make_pair(A[i], B[i]));

        ll sum = 0;
        while (k--)
        { 
            sum += P.top().first;
            pair<int, int> X = P.top();
            X.first = max(0, X.first - X.second);
            P.pop();
            P.push(X);
        }
        cout << sum << endl;
    }

    return 0;
}