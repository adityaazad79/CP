// Multi-Map

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> m;//tree
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        //s[s]; indexing is not allowed
        m.insert(s);
    }
    for (auto Str : m)
    {
        cout << Str << endl;
    }
}
