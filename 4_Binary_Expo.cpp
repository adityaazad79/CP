#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int power(int m, int n)
{
    if (n == 0)
        return 1;
    int val = power(m, n / 2);
    if (n % 2 == 0)
        return (((val*1LL) % M) * ((val*1LL) % M)) % M;
    else
        return (((((val*1LL) % M) * ((val*1LL) % M)) % M) * ((m *1LL)% M)) % M;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    

    return 0;
}