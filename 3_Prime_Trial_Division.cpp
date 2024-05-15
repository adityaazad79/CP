#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> trial(int n)
{
    vector<int> factor;
    for (int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            factor.push_back(i);
            n /= i;
        }
    }
    if(n>1)
        factor.push_back(n);

    return factor;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> factor;
    factor = trial(35);

    int size = factor.size();
    for (int i = 0; i < size; i++)
    {
        cout << factor[i] << endl;
    }

    return 0;
}