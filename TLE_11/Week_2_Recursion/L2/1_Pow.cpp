#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int power(int a, int b)
{
    if (b == 0)
        return 1;

    int ans = power(a, b / 2); 
    ans = ans * ans;

    if (b % 2)
        ans = ans * a;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;

    return 0;
}