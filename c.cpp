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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // seive(100);
    int n = 100;

    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i*i <= n; i++)
        if (prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;

    for (int i = 0; i <= 100; i++)
        if (prime[i])
        {
            cout << "Number " << i << " is ";
            cout << "prime" << endl;
        }

    return 0;
}