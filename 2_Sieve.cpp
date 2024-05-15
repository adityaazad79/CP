#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
#define push_back pub;
#define pop_back pob;
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<bool> prime(N+1, 1);
void sieve(int n)
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i*i <= n; i++)
        if (prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 100;
    sieve(n);
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
            cout << i << " is prime" << endl;
    }

    return 0;
}