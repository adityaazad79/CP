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
    t--;
    string S, temp;
    cin >> temp;
    bool flag = 1;
    while (t--)
    {
        cin >> S;
        if (S == "sweet" && temp == "sweet" && t!=0 && flag)
        {
            cout << "No" << endl;
            flag = 0;
        }
        temp = S;
    }
    if (flag)
        cout << "Yes" << endl;

    return 0;
}