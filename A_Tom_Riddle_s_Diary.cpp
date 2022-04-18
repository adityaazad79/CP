#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_set<string> s;

    int t;
    cin >> t;
    int n = t;
    while (t--)
    {
        string str;
        cin >> str;
        if (s.find(str) != s.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            s.insert(str);
        }
    }

    return 0;
}