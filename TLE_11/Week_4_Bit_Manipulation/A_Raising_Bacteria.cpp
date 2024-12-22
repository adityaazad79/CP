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
    int cnt = 0;
    while (t)
    {
        if (t % 2)
            cnt++;
        t = t / 2;
    }

    cout<<cnt<<endl;

    return 0;
}