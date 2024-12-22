#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(int n)
{
    if (n < 2)
        return to_string(n);

    string s = fun(n >> 1);
    // if (n & 1)
    //     s.push_back('1');
    // else
    //     s.push_back('0');
    n & 1 ? s.push_back('1') : s.push_back('0');

    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << fun(n) << endl;

    return 0;
}