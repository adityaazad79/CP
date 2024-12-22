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
        int n;
        cin >> n;
        int lg2 = int(log2(n));
        int po2 = pow(2, lg2) - 1;
        int up = n - po2;
        int po2_1 = pow(2, lg2 - 1) - 1;
        int up2 = po2 - po2_1;
        cout << max(up, up2) << endl;
    }

    return 0;
}

/*
1 - 0001
2 - 0010
3 - 0011
4 - 0100
5 - 0101
6 - 0110
7 - 0111
8 - 1000
9 - 1001
10 - 1010


*/