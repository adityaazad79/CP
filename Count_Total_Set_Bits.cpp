#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;

int fun(int A)
{
    const int M = 1e9 + 7;
    if (A == 1)
        return 1;
    int l = floor(log2(A));
    int r = A - pow(2, l) + 1;

    vector<long long> V(r / 2 + 2, -1);
    V[1] = 1;
    for (int i = 2; i <= r / 2 + 1; i++)
        V[i] = i / 2 + V[i / 2] + V[(i + 1) / 2];
    // cout<<r<<endl;
    // int ct=0,temp=0;
    // cout<<pow(2,l)-1<<endl;

    // return (int(l*1LL*pow(2,(l-1)))%1000000007+V[r]%1000000007)%1000000007;
    // return (int(l*1LL*pow(2,(l-1)))%1000000007+(r/2+V[r/2]+V[(r+1)/2])%1000000007)%1000000007;
    if (r == 1)
        return (int(l * 1LL * pow(2, (l - 1))) % M + (r / 2 + V[r / 2] + V[(r + 1) / 2] + 1) % M) % M;
    return (int(l * 1LL * pow(2, (l - 1))) % M + (r / 2 + V[r / 2] + V[(r + 1) / 2]) % M) % M;
    // return 0;
}
static int ct = 0;
int fun2(int A)
{
    if (A == 0)
        return 0;

    long long int x = 0;
    while ((1 << x) <= A)
    {
        x++;
    }
    x--;
    const long int mod = 1e9 + 7;
    long long int bitstill2x = x * (1 << (x - 1));
    long long int mostsbfrom2xton = A - (1 << x) + 1;
    long long int res = A - (1 << x);
    long long int ans = (bitstill2x % mod + mostsbfrom2xton % mod + fun2(res) % mod) % mod;

    return ans;
}

const int M = 1e9 + 7;
typedef long long ll;
int fun3(int A)
{
    static ll ans = 0;
    if (A == 0)
        return ans;

    if (A == 1)
    {
        if (ans)
            return ans + 1;
        return 1;
    }

    ll lb = 0;
    ll temp = A;
    while (temp >> 1)
    {
        lb++;
        temp = temp >> 1;
    }
    temp = 1 << lb;
    ll rem = A - temp + 1;

    ans = (ans % M + (lb * 1LL * (temp >> 1) % M + rem % M) % M) % M;

    A = A - temp;
    return fun3(A);
}

long long int countSetBitsHelper(int A, ll ans)
{
    if (A == 0)
        return ans;

    if (A == 1)
    {
        if (ans)
            return ans + 1;
        return 1;
    }

    long long int l = log2(A);
    long long int rem = A - (1 << l) + 1;

    ans = (ans % M + (l * 1LL * (1 << (l - 1))) % M + rem % M) % M;

    A = A - (1 << l);
    return countSetBitsHelper(A, ans);
}

int fun4(int A)
{
    return countSetBitsHelper(A, 0);
}

int fun5(int A)
{
    int ans = 0;
    while (true)
    {
        if (A == 0)
            return ans;

        if (A == 1)
        {
            if (ans)
                return ans + 1;
            return 1;
        }

        long long int l = log2(A);
        long long int rem = A - (1 << l) + 1;

        ans = (ans % M + (l * 1LL * (1 << (l - 1))) % M + rem % M) % M;
        A = A - (1 << l);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    // cout << fun(n) << endl;
    // cout << fun2(n) << endl;
    // cout << fun3(n) << endl;
    // cout << fun4(n) << endl;
    cout << fun5(n) << endl;

    return 0;
}